# ProDG 3.9.3 Memes, Bugs, and Matching Tricks

## Branch Bug (-O0)

When compiling with `-O0`, functions might have an excessive amount of branches to the epilogue.

```cpp
int SimpleFunction(int a, int b)
{
    return a + b;
}
```

```c
SimpleFunction__Fii:
    stwu r1, -24(r1)
    stw r31, 20(r1)
    mr r31, r1
    stw r3, 8(r31)
    stw r4, 12(r31)
    lwz r0, 8(r31)
    lwz r9, 12(r31)
    add r0, r0, r9
    mr r3, r0
    // Too many branches!!!
    b .L2
    b .L3
    b .L2
.L3:
.L2:
    lwz r11, 0(r1)
    lwz r31, -4(r11)
    mr r1, r11
    blr
```

I don't know the exact mechanism behind this bug, but it probably has something to do with `no_return_label` being created by `finish_function` in `gcc/cp/decl.c`. It's specific to C++ and never seems to show up in code compiled as regular C.

The most reliable way to fix it is by defining a class with an inline constructor.

```cpp
class FixClass
{
public:
    FixClass() { }
};

int SimpleFunction(int a, int b)
{
    return a + b;
}
```

```c
SimpleFunction__Fii:
    stwu r1, -24(r1)
    stw r31, 20(r1)
    mr r31, r1
    stw r3, 8(r31)
    stw r4, 12(r31)
    lwz r0, 8(r31)
    lwz r9, 12(r31)
    add r0, r0, r9
    mr r3, r0
    // Respectable, healthy amount of branches
    b .L4
.L4:
    lwz r11, 0(r1)
    lwz r31, -4(r11)
    mr r1, r11
    blr
```

Seeing this bug in a TU is an indication that you're missing a header with a class that should have an inline constructor.

I'm guessing that game developers didn't even know about this and didn't do anything special to get around it. It doesn't affect the functionality of the code, and it effectively fixes itself if you have any sort of class with an inline constructor.

Plus, if they were compiling things with `-O0`, I can't imagine they were particularly concerned about the quality of the assembly.

## Implicit Int Casts (-O0)

Implicitly casting a returned 32-bit integral type (`int`, `long`, `unsigned int`, `unsigned long`) to a different one when assigning to a variable will store `r3` directly to the variable rather than first moving it into a temporary register.

Here's what it looks like without any implicit casts:

```cpp
int ReturnValue()
{
    return 1;
}

int Assign()
{
    int ret = ReturnValue();
    return ret;
}
```

```c
Assign__Fv:
    stwu r1, -24(r1)
    mflr r0
    stw r31, 20(r1)
    stw r0, 28(r1)
    mr r31, r1
    bl ReturnValue__Fv
    mr r0, r3      // Value gets moved into a temp register
    stw r0, 8(r31) // before being stored in the variable.
    lwz r0, 8(r31)
    mr r3, r0
    b .L5
.L5:
    lwz r11, 0(r1)
    lwz r0, 4(r11)
    mtlr r0
    lwz r31, -4(r11)
    mr r1, r11
    blr
```

Even though `long` has the same size and signedness as `int`, an implicit cast between the two affects the resulting code.

The same thing happens if the signedness of the return type doesn't match the signedness of the variable type. So, returning an `unsigned int` and assigning it to an `int`, or vice versa, will affect the code.

```cpp
long ReturnValue()
{
    return 1;
}

int Assign()
{
    int ret = ReturnValue();
    return ret;
}
```

```c
Assign__Fv:
    stwu r1, -24(r1)
    mflr r0
    stw r31, 20(r1)
    stw r0, 28(r1)
    mr r31, r1
    bl ReturnValue__Fv
    stw r3, 8(r31) // r3 gets stored directly
    lwz r0, 8(r31)
    mr r3, r0
    b .L5
.L5:
    lwz r11, 0(r1)
    lwz r0, 4(r11)
    mtlr r0
    lwz r31, -4(r11)
    mr r1, r11
    blr
```

Strangely, this *doesn't* happen if you assign a `char`, `unsigned char`, `short`, or `unsigned short` to a 32-bit integral type. In that case, you'll always get the `mr` to a temporary register before storing to the actual variable, regardless of the signedness of the return value or the assigned variable.
