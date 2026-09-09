/*
    Compile unit: D:\DolphinSDK1.0\HVQ\build\libraries\hvqm4dec\src\hvqm4dec.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803519B8 -> 0x80357860
*/
static char copyright[17]; // size: 0x11, address: 0x803A7B98
static unsigned char clipTable[512]; // size: 0x200, address: 0x80484920
static int divTable[16]; // size: 0x40, address: 0x80484B20
static int mcdivTable[512]; // size: 0x800, address: 0x80484B60
// Range: 0x803519B8 -> 0x80351D18
static void init_global_constants() {
    // Local variables
    int i; // r5
    int n; // r6

    // References
    // -> static int mcdivTable[512];
    // -> static int divTable[16];
    // -> static unsigned char clipTable[512];
}

// total size: 0x2
struct _tagHVQData {
    // Members
    unsigned char dcv; // offset 0x0, size 0x1
    unsigned char bnm; // offset 0x1, size 0x1
};
// Range: 0xFFFFFFFF -> 0x80351D18
static void set_border(struct _tagHVQData * p /* r1+0x0 */) {}

// Range: 0x80351D18 -> 0x80351E34
static void setHVQPlaneDesc(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r1+0x0 */, int id /* r1+0x4 */, unsigned char h_s /* r1+0x8 */, unsigned char v_s /* r1+0x9 */) {
    // Local variables
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } * p; // r4
}

// Range: 0xFFFFFFFF -> 0x80351E34
static void setCode(// total size: 0x10
struct {
    // Members
    unsigned char * ptr; // offset 0x0, size 0x4
    unsigned char * top; // offset 0x4, size 0x4
    unsigned long size; // offset 0x8, size 0x4
    unsigned char word; // offset 0xC, size 0x1
    unsigned char filter; // offset 0xD, size 0x1
} * const str /* r1+0x0 */, unsigned char * top /* r1+0x4 */) {}

// Range: 0xFFFFFFFF -> 0x80351E34
static unsigned char getBit(// total size: 0x10
struct {
    // Members
    unsigned char * ptr; // offset 0x0, size 0x4
    unsigned char * top; // offset 0x4, size 0x4
    unsigned long size; // offset 0x8, size 0x4
    unsigned char word; // offset 0xC, size 0x1
    unsigned char filter; // offset 0xD, size 0x1
} * const str /* r1+0x0 */) {
    // Local variables
    unsigned char bit; // r3
}

static int readTree_signed; // size: 0x4, address: 0x8048FA40
static int readTree_scale; // size: 0x4, address: 0x8048FA44
// Range: 0x80351E34 -> 0x803521F8
static signed short _readTree(// total size: 0x808
struct {
    // Members
    int node_number; // offset 0x0, size 0x4
    int tree_root; // offset 0x4, size 0x4
    signed short L_leaf[512]; // offset 0x8, size 0x400
    signed short R_leaf[512]; // offset 0x408, size 0x400
} * const tree /* r30 */, // total size: 0x10
struct {
    // Members
    unsigned char * ptr; // offset 0x0, size 0x4
    unsigned char * top; // offset 0x4, size 0x4
    unsigned long size; // offset 0x8, size 0x4
    unsigned char word; // offset 0xC, size 0x1
    unsigned char filter; // offset 0xD, size 0x1
} * const str /* r31 */) {
    // Local variables
    int node; // r1+0x8
    signed short no; // r3
    signed short val; // r5

    // References
    // -> static int readTree_scale;
    // -> static int readTree_signed;
}

// Range: 0xFFFFFFFF -> 0x803521F8
static void readTree(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * const code /* r3 */, int is_signed /* r1+0xC */, int scale /* r1+0x10 */) {
    // Local variables
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } * str; // r6
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // r31

    // References
    // -> static int readTree_scale;
    // -> static int readTree_signed;
}

// Range: 0x803521F8 -> 0x80352290
static signed short decodeHuff(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r1+0x0 */) {
    // Local variables
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // r1+0x0
    signed short point; // r7
}

// Range: 0xFFFFFFFF -> 0x80352290
static int decodeSOvfSym(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r1+0x0 */, signed short range_min /* r1+0x4 */, signed short range_max /* r1+0x6 */) {
    // Local variables
    int ret; // r10
    int num; // r1+0x0
}

// Range: 0xFFFFFFFF -> 0x80352290
static int decodeUOvfSym(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r1+0x0 */, int range_max /* r1+0x4 */) {
    // Local variables
    int ret; // r9
    int num; // r1+0x0
}

// Range: 0x80352290 -> 0x803525E4
static void Ipic_BasisNumDec(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x8 */) {
    // Local variables
    int runln; // r5
    struct _tagHVQData * ydat; // r6
    struct _tagHVQData * udat; // r9
    struct _tagHVQData * vdat; // r10
    int i; // r1+0x8
    int j; // r7
    int h_block; // r8
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } * symcode; // r9
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } * runcode; // r10
}

// Range: 0xFFFFFFFF -> 0x803525E4
static signed short getDeltaDC(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r24 */, int c /* r1+0xC */, int * runln /* r31 */) {
    // Local variables
    signed short d; // r3
}

// Range: 0x803525E4 -> 0x803526F8
static void IpicDcvDec(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r21 */) {
    // Local variables
    int c; // r15
    struct _tagHVQData * curr; // r28
    struct _tagHVQData * prev; // r27
    int run; // r26
    int pred; // r25
    int h_block; // r24
    int i; // r23
    int j; // r22
}

// Range: 0x803526F8 -> 0x80352A9C
static void MakeNest(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x8 */, int x /* r1+0xC */, int y /* r1+0x10 */) {
    // Local variables
    int h_block; // r4
    int nblocks_hb; // r1+0x8
    int v_block; // r9
    struct _tagHVQData * src; // r11
    int h_dc_orderly; // r5
    int v_dc_orderly; // r7
    int h_dc_reverse; // r10
    int v_dc_reverse; // r12
    int h_nest_blank; // r8
    int v_nest_blank; // r1+0x8
    int i; // r31
    int j; // r30
    unsigned char * nestP; // r4
    unsigned char * backP; // r8
    struct _tagHVQData * dP; // r7
    unsigned char * nP; // r9
}

// Range: 0x80352A9C -> 0x80352C38
static void WeightImBlock(unsigned char * block /* r27 */, int blockWidth /* r1+0xC */, unsigned char c /* r1+0x10 */, unsigned char u /* r1+0x11 */, unsigned char d /* r1+0x12 */, unsigned char l /* r1+0x13 */, unsigned char r /* r1+0x14 */) {
    // Local variables
    int u_d; // r6
    int l_r; // r8
    int v1; // r9
    int v2; // r11
    int c2; // r28
    int c3; // r12
    int t1; // r31
    int t2; // r30
    int t3; // r29
    int t4; // r28
    int t5; // r27
    int t6; // r26
    int t7; // r23
    int t8; // r11

    // References
    // -> static unsigned char clipTable[512];
}

// Range: 0xFFFFFFFF -> 0x80352C38
static void dcBlock(unsigned char * block /* r6 */, int blockWidth /* r1+0x4 */, unsigned char dc /* r1+0x8 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0xFFFFFFFF -> 0x80352C38
static void OrgBlock(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x0 */, unsigned char * block /* r7 */, int blockWidth /* r1+0x8 */, int p /* r1+0xC */) {
    // Local variables
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } * str; // r6
    int i; // r1+0x0
}

// Range: 0x80352C38 -> 0x803530E4
static long GetAotBasis(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x8 */, unsigned char * basis /* r1+0xC */, long * pscl /* r1+0x10 */, unsigned char * nestTop /* r11 */, int nestWidth /* r1+0x18 */, int p /* r1+0x1C */) {
    // Local variables
    unsigned short code; // r1+0x8
    int step_x; // r6
    int step_y; // r7
    unsigned char min; // r9
    unsigned char max; // r10
    unsigned char * nP; // r30

    // References
    // -> static int divTable[16];
}

// Range: 0x803530E4 -> 0x803535D0
static long GetMCAotBasis(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x8 */, unsigned char * basis /* r1+0xC */, long * pscl /* r1+0x10 */, unsigned char * nestTop /* r11 */, int nestWidth /* r1+0x18 */, int p /* r1+0x1C */) {
    // Local variables
    unsigned short code; // r1+0x8
    int step_x; // r6
    int step_y; // r7
    unsigned char min; // r9
    unsigned char max; // r10
    unsigned char * nP; // r30

    // References
    // -> static int divTable[16];
}

// Range: 0x803535D0 -> 0x80353840
static long GetAotSum(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r26 */, long * sum /* r27 */, unsigned char nbasis /* r28 */, unsigned char * nestTop /* r29 */, int nestWidth /* r30 */, int p /* r31 */) {
    // Local variables
    long prev_scl; // r1+0x34
    long scl; // r1+0x8
    unsigned char bas[16]; // r1+0x24
}

// Range: 0x80353840 -> 0x80353AB0
static long GetMCAotSum(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r26 */, long * sum /* r27 */, unsigned char nbasis /* r28 */, unsigned char * nestTop /* r29 */, int nestWidth /* r30 */, int p /* r31 */) {
    // Local variables
    long prev_scl; // r1+0x34
    long scl; // r1+0x8
    unsigned char bas[16]; // r1+0x24
}

// Range: 0x80353AB0 -> 0x80353DC8
static void IntraAotBlock(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r3 */, unsigned char * blk /* r28 */, int blkWidth /* r29 */, unsigned char dcv /* r27 */, unsigned char nbasis /* r9 */, int p /* r8 */) {
    // Local variables
    long sum[16]; // r1+0x1C
    long avr; // r1+0x8
    int mns; // r30

    // References
    // -> static unsigned char clipTable[512];
}

// Range: 0x80353DC8 -> 0x80353F0C
static void IpicBlockDec(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r3 */, unsigned char * block /* r4 */, int blockWidth /* r5 */, // total size: 0x18
struct {
    // Members
    int id; // offset 0x0, size 0x4
    struct _tagHVQData * upp; // offset 0x4, size 0x4
    struct _tagHVQData * mid; // offset 0x8, size 0x4
    struct _tagHVQData * low; // offset 0xC, size 0x4
    struct _tagHVQData right; // offset 0x10, size 0x2
    struct _tagHVQData curr; // offset 0x12, size 0x2
    unsigned char l_dcv; // offset 0x14, size 0x1
} * inter /* r31 */) {
    // Local variables
    unsigned char nbasis; // r1+0x8
    unsigned char c_dc; // r30
    unsigned char u_dc; // r6
    unsigned char d_dc; // r7
    unsigned char r_dc; // r9
    unsigned char dc; // r1+0x8
}

// Range: 0x80353F0C -> 0x80353FE0
static void IpicLineDec(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r27 */, void * outbuf /* r28 */, int blockWidth /* r29 */, // total size: 0x18
struct {
    // Members
    int id; // offset 0x0, size 0x4
    struct _tagHVQData * upp; // offset 0x4, size 0x4
    struct _tagHVQData * mid; // offset 0x8, size 0x4
    struct _tagHVQData * low; // offset 0xC, size 0x4
    struct _tagHVQData right; // offset 0x10, size 0x2
    struct _tagHVQData curr; // offset 0x12, size 0x2
    unsigned char l_dcv; // offset 0x14, size 0x1
} * inter /* r30 */, int lineWidth /* r1+0x18 */) {
    // Local variables
    int i; // r31
}

// Range: 0x80353FE0 -> 0x803540BC
static void IpicPlaneDec(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r25 */, int p /* r1+0xC */, void * outbuf /* r26 */) {
    // Local variables
    // total size: 0x18
    struct {
        // Members
        int id; // offset 0x0, size 0x4
        struct _tagHVQData * upp; // offset 0x4, size 0x4
        struct _tagHVQData * mid; // offset 0x8, size 0x4
        struct _tagHVQData * low; // offset 0xC, size 0x4
        struct _tagHVQData right; // offset 0x10, size 0x2
        struct _tagHVQData curr; // offset 0x12, size 0x2
        unsigned char l_dcv; // offset 0x14, size 0x1
    } inter; // r1+0x14
    int imgWidth; // r28
    int downblock; // r1+0x8
    int h_block; // r27
    int nblocks_hb; // r1+0x8
    int j; // r30
}

// Range: 0x803540BC -> 0x80354148
static void initMCHandler(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r3 */, struct _tagMCHander * mch /* r4 */, unsigned char * curr /* r5 */, unsigned char * forw /* r6 */, unsigned char * back /* r7 */) {
    // Local variables
    int p; // r1+0x0
}

// Range: 0xFFFFFFFF -> 0x80354148
static void resetMCHandler(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r1+0x0 */, struct _tagMCHander * mch /* r1+0x4 */, unsigned char * curr /* r4 */) {
    // Local variables
    struct _tagPlnMCHandler * pmc; // r1+0x0
}

// Range: 0xFFFFFFFF -> 0x80354148
static void _setMCTop(struct _tagPlnMCHandler * pmc /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void _setMCNextBlk(struct _tagPlnMCHandler * pmc /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void _setMCDownBlk(struct _tagPlnMCHandler * pmc /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void setMCTop(struct _tagMCHander * mch /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void setMCNextBlk(struct _tagMCHander * mch /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void setMCDownBlk(struct _tagMCHander * mch /* r1+0x0 */) {}

// Range: 0xFFFFFFFF -> 0x80354148
static void setMCTarget(struct _tagMCHander * mch /* r1+0x0 */, int direct /* r1+0x4 */) {}

// Range: 0x80354148 -> 0x80354818
static void _MotionComp(unsigned char * cP /* r9 */, int cWidth /* r1+0x4 */, unsigned char * tP /* r7 */, int tWidth /* r1+0xC */, int x_half /* r1+0x10 */, int y_half /* r1+0x14 */) {
    // Local variables
    unsigned char * up; // r7
    unsigned char * dn; // r8
    unsigned char * up; // r7
    unsigned char * dn; // r8
}

// Range: 0x80354818 -> 0x803548DC
static void MotionComp(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r3 */, struct _tagMCHander * mch /* r4 */, int tx /* r22 */, int ty /* r23 */) {
    // Local variables
    int c; // r27
    int i; // r26
    struct _tagPlnMCHandler * pmc; // r1+0x8
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } * sip; // r1+0x8
    unsigned char * t_top; // r21
    unsigned long * iofsP; // r25
    int blocks; // r24
    unsigned char * cP; // r3
    unsigned char * tP; // r5
    int offset; // r3
}

// Range: 0xFFFFFFFF -> 0x803548DC
static void decode_PB_dc(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r24 */, struct _tagMCHander * mch /* r4 */) {
    // Local variables
    int c; // r28
    int i; // r27
    int j; // r1+0x8
    int blocks; // r26
    struct _tagPlnMCHandler * pmc; // r1+0x8
    unsigned short * bofsP; // r25
}

// Range: 0xFFFFFFFF -> 0x803548DC
static void reset_PB_dc(struct _tagMCHander * mch /* r1+0x0 */) {}

// Range: 0x803548DC -> 0x80354D90
static void decode_PB_cc(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r3 */, struct _tagMCHander * mc /* r4 */, int proctype /* r1+0x10 */, int mcbtype /* r1+0x14 */) {
    // Local variables
    unsigned char cc; // r9
    struct _tagHVQData * dataP; // r6
    struct _tagHVQData * ydat; // r8
    struct _tagHVQData * udat; // r10
    struct _tagHVQData * vdat; // r11
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } * sip; // r5
    unsigned short * bofsP; // r7
    int p; // r8
    int i; // r10
    int j; // r1+0x8
    int blocks; // r1+0x8
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } * symcode; // r10
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } * runcode; // r11
}

// Range: 0x80354D90 -> 0x8035536C
static void PrediAotBlock(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r26 */, unsigned char * blk /* r27 */, unsigned char * mblk /* r21 */, int blkWidth /* r28 */, unsigned char nbasis /* r1+0x18 */, unsigned char * nestPtr /* r8 */, int nestWidth /* r9 */, int p /* r29 */, int half_x /* r20 */, int half_y /* r19 */) {
    // Local variables
    long sum[16]; // r1+0x88
    unsigned char mvc[16]; // r1+0x78
    int mov[16]; // r1+0x38
    long avr; // r1+0x8
    long scl; // r1+0x8
    long dcv; // r19
    int max; // r31
    int min; // r30
    int i; // r1+0x8
    int j; // r6
    int mns; // r29

    // References
    // -> static unsigned char clipTable[512];
    // -> static int mcdivTable[512];
}

// Range: 0x8035536C -> 0x80355614
static void MCBlockDecMCNest(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r31 */, struct _tagMCHander * mch /* r4 */, int tx /* r17 */, int ty /* r16 */) {
    // Local variables
    int c; // r25
    int i; // r24
    unsigned char * nestP; // r19
    struct _tagPlnMCHandler * pmc; // r1+0x10
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } * sip; // r1+0x10
    unsigned char * t_top; // r23
    unsigned short * bofsP; // r22
    unsigned long * iofsP; // r21
    int blocks; // r20
    unsigned char nbasis; // r7
    unsigned char * cP; // r6
    int offset; // r5
    int j; // r1+0x10
    unsigned char * tP; // r5
}

// Range: 0x80355614 -> 0x8035576C
static void MCBlockDecDCNest(// total size: 0x3CD0
struct {
    // Members
    // total size: 0x38
    struct {
        // Members
        struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
        struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
        unsigned short nblocks_h; // offset 0x8, size 0x2
        unsigned short nblocks_v; // offset 0xA, size 0x2
        unsigned short nblocks_hb; // offset 0xC, size 0x2
        unsigned short nblocks_vb; // offset 0xE, size 0x2
        unsigned short bibUscan[4]; // offset 0x10, size 0x8
        unsigned long imgUscan[4]; // offset 0x18, size 0x10
        unsigned short plane_width; // offset 0x28, size 0x2
        unsigned short plane_height; // offset 0x2A, size 0x2
        unsigned long plane_size; // offset 0x2C, size 0x4
        unsigned char h_shift; // offset 0x30, size 0x1
        unsigned char v_shift; // offset 0x31, size 0x1
        unsigned char hvqblk_h; // offset 0x32, size 0x1
        unsigned char hvqblk_v; // offset 0x33, size 0x1
        unsigned char nblocks_mcb; // offset 0x34, size 0x1
    } pln[3]; // offset 0x0, size 0xA8
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } dcv_tree; // offset 0xA8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } zrn_tree; // offset 0x8B0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } scl_tree; // offset 0x10B8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } num_tree; // offset 0x18C0, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } vec_tree; // offset 0x20C8, size 0x808
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } mrn_tree; // offset 0x28D0, size 0x808
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcval[3]; // offset 0x30D8, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } dcrun[3]; // offset 0x3114, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } scale[3]; // offset 0x3150, size 0x3C
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsnum[2]; // offset 0x318C, size 0x28
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } bsrun[2]; // offset 0x31B4, size 0x28
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } aotcd[3]; // offset 0x31DC, size 0x30
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecx; // offset 0x320C, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mvecy; // offset 0x3220, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mcaot; // offset 0x3234, size 0x14
    // total size: 0x14
    struct {
        // Members
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } str; // offset 0x0, size 0x10
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } * tree; // offset 0x10, size 0x4
    } mstat; // offset 0x3248, size 0x14
    unsigned short nestsize_h; // offset 0x325C, size 0x2
    unsigned short nestsize_v; // offset 0x325E, size 0x2
    unsigned char landscape; // offset 0x3260, size 0x1
    unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
    signed short dc_max; // offset 0x3CC6, size 0x2
    signed short dc_min; // offset 0x3CC8, size 0x2
    unsigned char aotscale_q; // offset 0x3CCA, size 0x1
    unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
    unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
} * ws /* r23 */, struct _tagMCHander * mch /* r4 */) {
    // Local variables
    int c; // r31
    struct _tagPlnMCHandler * pmc; // r1+0x8
    struct _tagHVQData * dataP; // r30
    int plane_width; // r29
    int w; // r28
    unsigned short * bofsP; // r27
    unsigned long * iofsP; // r26
    int blocks; // r25
    int i; // r24
    unsigned char * cP; // r4
    unsigned char dc; // r10
    unsigned char nbasis; // r7
    int j; // r1+0x8
    unsigned char u_dc; // r6
    unsigned char l_dc; // r8
    unsigned char r_dc; // r9
    unsigned char d_dc; // r7
}

// Range: 0xFFFFFFFF -> 0x8035576C
static void getMVector(int * vec /* r1+0x0 */, // total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r1+0x4 */, int fcode /* r1+0x8 */) {
    // Local variables
    int range; // r1+0x0
    int v; // r9
    int diff; // r7
    int i; // r11
}

// Range: 0xFFFFFFFF -> 0x8035576C
static void initMCBproc(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r29 */, // total size: 0x8
struct {
    // Members
    int status; // offset 0x0, size 0x4
    int runlng; // offset 0x4, size 0x4
} * flg /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x8035576C
static int getMCBproc(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r29 */, // total size: 0x8
struct {
    // Members
    int status; // offset 0x0, size 0x4
    int runlng; // offset 0x4, size 0x4
} * flg /* r30 */) {}

// total size: 0x8
struct _tagMcbMCDirFlag {
    // Members
    int status; // offset 0x0, size 0x4
    int runlng; // offset 0x4, size 0x4
};
// Range: 0xFFFFFFFF -> 0x8035576C
static void initMCBtype(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r30 */, struct _tagMcbMCDirFlag * flg /* r31 */) {}

static int mcbtypetrans$1288[2][3]; // size: 0x18, address: 0x803A7BAC
// Range: 0xFFFFFFFF -> 0x8035576C
static int getMCBtype(// total size: 0x14
struct {
    // Members
    // total size: 0x10
    struct {
        // Members
        unsigned char * ptr; // offset 0x0, size 0x4
        unsigned char * top; // offset 0x4, size 0x4
        unsigned long size; // offset 0x8, size 0x4
        unsigned char word; // offset 0xC, size 0x1
        unsigned char filter; // offset 0xD, size 0x1
    } str; // offset 0x0, size 0x10
    // total size: 0x808
    struct {
        // Members
        int node_number; // offset 0x0, size 0x4
        int tree_root; // offset 0x4, size 0x4
        signed short L_leaf[512]; // offset 0x8, size 0x400
        signed short R_leaf[512]; // offset 0x408, size 0x400
    } * tree; // offset 0x10, size 0x4
} * code /* r30 */, struct _tagMcbMCDirFlag * flg /* r31 */) {
    // References
    // -> static int mcbtypetrans$1288[2][3];
}

// Range: 0x8035576C -> 0x80355C04
static void spread_PB_descMap(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r1+0x74 */, struct _tagMCHander * mch /* r16 */) {
    // Local variables
    // total size: 0x3CD0
    struct {
        // Members
        // total size: 0x38
        struct {
            // Members
            struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
            struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
            unsigned short nblocks_h; // offset 0x8, size 0x2
            unsigned short nblocks_v; // offset 0xA, size 0x2
            unsigned short nblocks_hb; // offset 0xC, size 0x2
            unsigned short nblocks_vb; // offset 0xE, size 0x2
            unsigned short bibUscan[4]; // offset 0x10, size 0x8
            unsigned long imgUscan[4]; // offset 0x18, size 0x10
            unsigned short plane_width; // offset 0x28, size 0x2
            unsigned short plane_height; // offset 0x2A, size 0x2
            unsigned long plane_size; // offset 0x2C, size 0x4
            unsigned char h_shift; // offset 0x30, size 0x1
            unsigned char v_shift; // offset 0x31, size 0x1
            unsigned char hvqblk_h; // offset 0x32, size 0x1
            unsigned char hvqblk_v; // offset 0x33, size 0x1
            unsigned char nblocks_mcb; // offset 0x34, size 0x1
        } pln[3]; // offset 0x0, size 0xA8
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } dcv_tree; // offset 0xA8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } zrn_tree; // offset 0x8B0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } scl_tree; // offset 0x10B8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } num_tree; // offset 0x18C0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } vec_tree; // offset 0x20C8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } mrn_tree; // offset 0x28D0, size 0x808
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcval[3]; // offset 0x30D8, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcrun[3]; // offset 0x3114, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } scale[3]; // offset 0x3150, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsnum[2]; // offset 0x318C, size 0x28
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsrun[2]; // offset 0x31B4, size 0x28
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } aotcd[3]; // offset 0x31DC, size 0x30
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecx; // offset 0x320C, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecy; // offset 0x3220, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mcaot; // offset 0x3234, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mstat; // offset 0x3248, size 0x14
        unsigned short nestsize_h; // offset 0x325C, size 0x2
        unsigned short nestsize_v; // offset 0x325E, size 0x2
        unsigned char landscape; // offset 0x3260, size 0x1
        unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
        signed short dc_max; // offset 0x3CC6, size 0x2
        signed short dc_min; // offset 0x3CC8, size 0x2
        unsigned char aotscale_q; // offset 0x3CCA, size 0x1
        unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
        unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
    } * ws; // r27
    int i; // r1+0x7C
    int j; // r1+0x78

    // References
    // -> static int mcbtypetrans$1288[2][3];
}

// total size: 0x34
struct _tagPlnMCHandler {
    // Members
    int bsrunleng; // offset 0x0, size 0x4
    int prev_dcv; // offset 0x4, size 0x4
    struct _tagHVQData * data; // offset 0x8, size 0x4
    struct _tagHVQData * dataTop; // offset 0xC, size 0x4
    unsigned char * lin_top; // offset 0x10, size 0x4
    unsigned char * blk_top; // offset 0x14, size 0x4
    unsigned char * targ; // offset 0x18, size 0x4
    unsigned char * forw; // offset 0x1C, size 0x4
    unsigned char * back; // offset 0x20, size 0x4
    unsigned short next_macro_pix; // offset 0x24, size 0x2
    unsigned long down_macro_pix; // offset 0x28, size 0x4
    int hvqblk_h; // offset 0x2C, size 0x4
    int hvqblk_v; // offset 0x30, size 0x4
};
// total size: 0x9C
struct _tagMCHander {
    // Members
    struct _tagPlnMCHandler pln[3]; // offset 0x0, size 0x9C
};
// Range: 0x80355C04 -> 0x80355FF8
static void BpicPlaneDec(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r19 */, void * curr /* r21 */, void * forw /* r1+0x10 */, void * back /* r7 */) {
    // Local variables
    // total size: 0x3CD0
    struct {
        // Members
        // total size: 0x38
        struct {
            // Members
            struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
            struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
            unsigned short nblocks_h; // offset 0x8, size 0x2
            unsigned short nblocks_v; // offset 0xA, size 0x2
            unsigned short nblocks_hb; // offset 0xC, size 0x2
            unsigned short nblocks_vb; // offset 0xE, size 0x2
            unsigned short bibUscan[4]; // offset 0x10, size 0x8
            unsigned long imgUscan[4]; // offset 0x18, size 0x10
            unsigned short plane_width; // offset 0x28, size 0x2
            unsigned short plane_height; // offset 0x2A, size 0x2
            unsigned long plane_size; // offset 0x2C, size 0x4
            unsigned char h_shift; // offset 0x30, size 0x1
            unsigned char v_shift; // offset 0x31, size 0x1
            unsigned char hvqblk_h; // offset 0x32, size 0x1
            unsigned char hvqblk_v; // offset 0x33, size 0x1
            unsigned char nblocks_mcb; // offset 0x34, size 0x1
        } pln[3]; // offset 0x0, size 0xA8
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } dcv_tree; // offset 0xA8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } zrn_tree; // offset 0x8B0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } scl_tree; // offset 0x10B8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } num_tree; // offset 0x18C0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } vec_tree; // offset 0x20C8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } mrn_tree; // offset 0x28D0, size 0x808
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcval[3]; // offset 0x30D8, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcrun[3]; // offset 0x3114, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } scale[3]; // offset 0x3150, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsnum[2]; // offset 0x318C, size 0x28
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsrun[2]; // offset 0x31B4, size 0x28
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } aotcd[3]; // offset 0x31DC, size 0x30
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecx; // offset 0x320C, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecy; // offset 0x3220, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mcaot; // offset 0x3234, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mstat; // offset 0x3248, size 0x14
        unsigned short nestsize_h; // offset 0x325C, size 0x2
        unsigned short nestsize_v; // offset 0x325E, size 0x2
        unsigned char landscape; // offset 0x3260, size 0x1
        unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
        signed short dc_max; // offset 0x3CC6, size 0x2
        signed short dc_min; // offset 0x3CC8, size 0x2
        unsigned char aotscale_q; // offset 0x3CCA, size 0x1
        unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
        unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
    } * ws; // r25
    struct _tagMCHander mchandler; // r1+0x60
    int vx; // r24
    int vy; // r23
    int dir; // r22
    int i; // r21
    int j; // r20
    unsigned char cc; // r1+0x8
    unsigned char mtype; // r1+0x8
    int d; // r1+0x8
}

// Range: 0x80355FF8 -> 0x80356018
void HVQM4InitDecoder() {}

// Range: 0x80356018 -> 0x8035604C
void HVQM4InitSeqObj(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r1+0x0 */, // total size: 0x8
struct {
    // Members
    unsigned short width; // offset 0x0, size 0x2
    unsigned short height; // offset 0x2, size 0x2
    unsigned char h_sampling_rate; // offset 0x4, size 0x1
    unsigned char v_sampling_rate; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
} * header /* r1+0x4 */) {}

// Range: 0x8035604C -> 0x803560C0
unsigned long HVQM4BuffSize(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r1+0x0 */) {
    // Local variables
    int h; // r6
    int v; // r7
}

// Range: 0x803560C0 -> 0x80356524
void HVQM4SetBuffer(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r30 */, void * buf /* r31 */) {
    // Local variables
    // total size: 0x3CD0
    struct {
        // Members
        // total size: 0x38
        struct {
            // Members
            struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
            struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
            unsigned short nblocks_h; // offset 0x8, size 0x2
            unsigned short nblocks_v; // offset 0xA, size 0x2
            unsigned short nblocks_hb; // offset 0xC, size 0x2
            unsigned short nblocks_vb; // offset 0xE, size 0x2
            unsigned short bibUscan[4]; // offset 0x10, size 0x8
            unsigned long imgUscan[4]; // offset 0x18, size 0x10
            unsigned short plane_width; // offset 0x28, size 0x2
            unsigned short plane_height; // offset 0x2A, size 0x2
            unsigned long plane_size; // offset 0x2C, size 0x4
            unsigned char h_shift; // offset 0x30, size 0x1
            unsigned char v_shift; // offset 0x31, size 0x1
            unsigned char hvqblk_h; // offset 0x32, size 0x1
            unsigned char hvqblk_v; // offset 0x33, size 0x1
            unsigned char nblocks_mcb; // offset 0x34, size 0x1
        } pln[3]; // offset 0x0, size 0xA8
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } dcv_tree; // offset 0xA8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } zrn_tree; // offset 0x8B0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } scl_tree; // offset 0x10B8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } num_tree; // offset 0x18C0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } vec_tree; // offset 0x20C8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } mrn_tree; // offset 0x28D0, size 0x808
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcval[3]; // offset 0x30D8, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcrun[3]; // offset 0x3114, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } scale[3]; // offset 0x3150, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsnum[2]; // offset 0x318C, size 0x28
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsrun[2]; // offset 0x31B4, size 0x28
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } aotcd[3]; // offset 0x31DC, size 0x30
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecx; // offset 0x320C, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecy; // offset 0x3220, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mcaot; // offset 0x3234, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mstat; // offset 0x3248, size 0x14
        unsigned short nestsize_h; // offset 0x325C, size 0x2
        unsigned short nestsize_v; // offset 0x325E, size 0x2
        unsigned char landscape; // offset 0x3260, size 0x1
        unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
        signed short dc_max; // offset 0x3CC6, size 0x2
        signed short dc_min; // offset 0x3CC8, size 0x2
        unsigned char aotscale_q; // offset 0x3CCA, size 0x1
        unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
        unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
    } * ws; // r1+0x8
    struct _tagHVQData * bp; // r1+0x8
    int c; // r4
    int i; // r6
    struct _tagHVQData * p; // r9
}

// Range: 0x80356524 -> 0x80356E4C
void HVQM4DecodeIpic(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r1+0x8 */, void * code /* r30 */, void * outbuf /* r29 */) {
    // Local variables
    // total size: 0x3CD0
    struct {
        // Members
        // total size: 0x38
        struct {
            // Members
            struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
            struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
            unsigned short nblocks_h; // offset 0x8, size 0x2
            unsigned short nblocks_v; // offset 0xA, size 0x2
            unsigned short nblocks_hb; // offset 0xC, size 0x2
            unsigned short nblocks_vb; // offset 0xE, size 0x2
            unsigned short bibUscan[4]; // offset 0x10, size 0x8
            unsigned long imgUscan[4]; // offset 0x18, size 0x10
            unsigned short plane_width; // offset 0x28, size 0x2
            unsigned short plane_height; // offset 0x2A, size 0x2
            unsigned long plane_size; // offset 0x2C, size 0x4
            unsigned char h_shift; // offset 0x30, size 0x1
            unsigned char v_shift; // offset 0x31, size 0x1
            unsigned char hvqblk_h; // offset 0x32, size 0x1
            unsigned char hvqblk_v; // offset 0x33, size 0x1
            unsigned char nblocks_mcb; // offset 0x34, size 0x1
        } pln[3]; // offset 0x0, size 0xA8
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } dcv_tree; // offset 0xA8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } zrn_tree; // offset 0x8B0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } scl_tree; // offset 0x10B8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } num_tree; // offset 0x18C0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } vec_tree; // offset 0x20C8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } mrn_tree; // offset 0x28D0, size 0x808
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcval[3]; // offset 0x30D8, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcrun[3]; // offset 0x3114, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } scale[3]; // offset 0x3150, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsnum[2]; // offset 0x318C, size 0x28
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsrun[2]; // offset 0x31B4, size 0x28
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } aotcd[3]; // offset 0x31DC, size 0x30
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecx; // offset 0x320C, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecy; // offset 0x3220, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mcaot; // offset 0x3234, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mstat; // offset 0x3248, size 0x14
        unsigned short nestsize_h; // offset 0x325C, size 0x2
        unsigned short nestsize_v; // offset 0x325E, size 0x2
        unsigned char landscape; // offset 0x3260, size 0x1
        unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
        signed short dc_max; // offset 0x3CC6, size 0x2
        signed short dc_min; // offset 0x3CC8, size 0x2
        unsigned char aotscale_q; // offset 0x3CCA, size 0x1
        unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
        unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
    } * ws; // r31
    // total size: 0x48
    struct {
        // Members
        unsigned char dcv_quantize; // offset 0x0, size 0x1
        unsigned char scl_quantize; // offset 0x1, size 0x1
        unsigned short dummy; // offset 0x2, size 0x2
        unsigned short nest_start_x; // offset 0x4, size 0x2
        unsigned short nest_start_y; // offset 0x6, size 0x2
        unsigned long offsets[16]; // offset 0x8, size 0x40
    } * hdr; // r1+0x8
    unsigned char * body; // r1+0x8
    int plane; // r30

    // References
    // -> static int readTree_scale;
    // -> static int readTree_signed;
}

// Range: 0x80356E4C -> 0x80356E70
void HVQM4DecodePpic(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r3 */, void * code /* r4 */, void * outbuf /* r5 */, void * ref1 /* r6 */) {}

// Range: 0x80356E70 -> 0x80357860
void HVQM4DecodeBpic(// total size: 0xC
struct {
    // Members
    void * ws; // offset 0x0, size 0x4
    unsigned short frame_width; // offset 0x4, size 0x2
    unsigned short frame_height; // offset 0x6, size 0x2
    unsigned char h_samp; // offset 0x8, size 0x1
    unsigned char v_samp; // offset 0x9, size 0x1
} * obj /* r29 */, void * code /* r30 */, void * outbuf /* r28 */, void * ref2 /* r27 */, void * ref1 /* r26 */) {
    // Local variables
    // total size: 0x3CD0
    struct {
        // Members
        // total size: 0x38
        struct {
            // Members
            struct _tagHVQData * blockInfoBuf; // offset 0x0, size 0x4
            struct _tagHVQData * blockInfoTop; // offset 0x4, size 0x4
            unsigned short nblocks_h; // offset 0x8, size 0x2
            unsigned short nblocks_v; // offset 0xA, size 0x2
            unsigned short nblocks_hb; // offset 0xC, size 0x2
            unsigned short nblocks_vb; // offset 0xE, size 0x2
            unsigned short bibUscan[4]; // offset 0x10, size 0x8
            unsigned long imgUscan[4]; // offset 0x18, size 0x10
            unsigned short plane_width; // offset 0x28, size 0x2
            unsigned short plane_height; // offset 0x2A, size 0x2
            unsigned long plane_size; // offset 0x2C, size 0x4
            unsigned char h_shift; // offset 0x30, size 0x1
            unsigned char v_shift; // offset 0x31, size 0x1
            unsigned char hvqblk_h; // offset 0x32, size 0x1
            unsigned char hvqblk_v; // offset 0x33, size 0x1
            unsigned char nblocks_mcb; // offset 0x34, size 0x1
        } pln[3]; // offset 0x0, size 0xA8
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } dcv_tree; // offset 0xA8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } zrn_tree; // offset 0x8B0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } scl_tree; // offset 0x10B8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } num_tree; // offset 0x18C0, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } vec_tree; // offset 0x20C8, size 0x808
        // total size: 0x808
        struct {
            // Members
            int node_number; // offset 0x0, size 0x4
            int tree_root; // offset 0x4, size 0x4
            signed short L_leaf[512]; // offset 0x8, size 0x400
            signed short R_leaf[512]; // offset 0x408, size 0x400
        } mrn_tree; // offset 0x28D0, size 0x808
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcval[3]; // offset 0x30D8, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } dcrun[3]; // offset 0x3114, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } scale[3]; // offset 0x3150, size 0x3C
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsnum[2]; // offset 0x318C, size 0x28
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } bsrun[2]; // offset 0x31B4, size 0x28
        // total size: 0x10
        struct {
            // Members
            unsigned char * ptr; // offset 0x0, size 0x4
            unsigned char * top; // offset 0x4, size 0x4
            unsigned long size; // offset 0x8, size 0x4
            unsigned char word; // offset 0xC, size 0x1
            unsigned char filter; // offset 0xD, size 0x1
        } aotcd[3]; // offset 0x31DC, size 0x30
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecx; // offset 0x320C, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mvecy; // offset 0x3220, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mcaot; // offset 0x3234, size 0x14
        // total size: 0x14
        struct {
            // Members
            // total size: 0x10
            struct {
                // Members
                unsigned char * ptr; // offset 0x0, size 0x4
                unsigned char * top; // offset 0x4, size 0x4
                unsigned long size; // offset 0x8, size 0x4
                unsigned char word; // offset 0xC, size 0x1
                unsigned char filter; // offset 0xD, size 0x1
            } str; // offset 0x0, size 0x10
            // total size: 0x808
            struct {
                // Members
                int node_number; // offset 0x0, size 0x4
                int tree_root; // offset 0x4, size 0x4
                signed short L_leaf[512]; // offset 0x8, size 0x400
                signed short R_leaf[512]; // offset 0x408, size 0x400
            } * tree; // offset 0x10, size 0x4
        } mstat; // offset 0x3248, size 0x14
        unsigned short nestsize_h; // offset 0x325C, size 0x2
        unsigned short nestsize_v; // offset 0x325E, size 0x2
        unsigned char landscape; // offset 0x3260, size 0x1
        unsigned char nestBuf[2660]; // offset 0x3261, size 0xA64
        signed short dc_max; // offset 0x3CC6, size 0x2
        signed short dc_min; // offset 0x3CC8, size 0x2
        unsigned char aotscale_q; // offset 0x3CCA, size 0x1
        unsigned char dc_scale_q; // offset 0x3CCB, size 0x1
        unsigned char fcode[2][2]; // offset 0x3CCC, size 0x4
    } * ws; // r31
    // total size: 0x4C
    struct {
        // Members
        unsigned char dcv_quantize; // offset 0x0, size 0x1
        unsigned char scl_quantize; // offset 0x1, size 0x1
        unsigned char forw_h_fcode; // offset 0x2, size 0x1
        unsigned char forw_v_fcode; // offset 0x3, size 0x1
        unsigned char back_h_fcode; // offset 0x4, size 0x1
        unsigned char back_v_fcode; // offset 0x5, size 0x1
        unsigned short dummy; // offset 0x6, size 0x2
        unsigned long offsets[17]; // offset 0x8, size 0x44
    } * hdr; // r1+0x8
    unsigned char * body; // r1+0x8

    // References
    // -> static int readTree_scale;
    // -> static int readTree_signed;
}

