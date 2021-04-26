/* FLAGS 
7	z	Zero flag
6	n	Subtraction flag (BCD)
5	h	Half Carry flag (BCD)
4	c	Carry flag
*/

#define FLAG_ZERO       (1 << 7)
#define FLAG_SUB        (1 << 6)
#define FLAG_HALFCARRY  (1 << 5)
#define FLAG_CARRY      (1 << 4)

//bitwise AND to check flag register values
#define FLAG_ISZERO              (registers.f & FLAG_ZERO)
#define FLAG_ISSUB               (registers.f & FLAG_SUB)
#define FLAG_ISHALFCARRY         (registers.f & FLAG_HALFCARRY)
#define FLAG_ISCARRY             (registers.f & FLAG_CARRY)

#define FLAG_ISSET(x)            (registers.f & (x))
#define FLAG_SET(x)              (registers.f |= (x))
#define FLAG_CLEAR(x)            (registers.f &= ~(x))

typedef struct instruction 
{
    char *disassembly;
    unsigned char operandLength;
    void *execute;
} instruction;

unsigned long ticks;
unsigned char stopped;