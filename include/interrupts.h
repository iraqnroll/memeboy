/* INTERRUPT TABLE 
Bit 0: VBlank   Interrupt Enable  (INT 40h)  (1=Enable)
Bit 1: LCD STAT Interrupt Enable  (INT 48h)  (1=Enable)
Bit 2: Timer    Interrupt Enable  (INT 50h)  (1=Enable)
Bit 3: Serial   Interrupt Enable  (INT 58h)  (1=Enable)
Bit 4: Joypad   Interrupt Enable  (INT 60h)  (1=Enable)
*/

#define INTERRUPT_VBLANK    (1 << 0)
#define INTERRUPT_LCDSTAT   (1 << 1)
#define INTERRUPT_TIMER     (1 << 2)
#define INTERRUPT_SERIAL    (1 << 3)
#define INTERRUPT_JOYPAD    (1 << 0)

typedef struct interrupt
{
    unsigned char masterflag;
    unsigned char enable;
    unsigned char flags;
    
} interrupt;