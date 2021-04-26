typedef struct registers 
{
    //16-bit AF register (Accumulator & flags)
    struct
    {
        union
        {
            struct
            {
                unsigned char f;
                unsigned char a;
            };
            unsigned short af;
        };
    };
    //16-bit BC register
    struct
    {
        union
        {
            struct
            {
                unsigned char c;
                unsigned char b;
            };
            unsigned short bc;
        };
    };
    //16-bit DE register
    struct
    {
        union
        {
            struct
            {
                unsigned char e;
                unsigned char d;
            };
            unsigned short de;
        };
    };
    //16-bit HL register
    struct
    {
        union
        {
            struct
            {
                unsigned char l;
                unsigned char h;
            };
            unsigned short hl;
        };
    };

    //16-bit stack pointer
    unsigned short sp;
    //16-bit program counter/pointer
    unsigned short pc;
    
} registers;