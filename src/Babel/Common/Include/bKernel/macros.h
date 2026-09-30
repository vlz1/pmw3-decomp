#pragma once

#define ALIGN_UP(x, pow2) (((x) + (pow2) - 1) & ~((pow2) - 1))
