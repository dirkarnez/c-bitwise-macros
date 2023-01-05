#include <stdio.h>

#define b0000_0001 1
#define b0000_0010 2
#define b0000_0100 4
#define b0000_1000 8
#define b0001_0000 16
#define b0010_0000 32
#define b0100_0000 64
#define b1000_0000 128
 
#define reverse(num) ( \
    ((num & 0x01) << 7)  \
    | ((num & 0x02) << 5) \
    | ((num & 0x04) << 3) \
    | ((num & 0x08) << 1) \
    | ((num & 0x10) >> 1) \
    | ((num & 0x20) >> 3) \
    | ((num & 0x40) >> 5) \
    | ((num & 0x80) >> 7) \
)

#define led_format(input) ((~reverse(input)) ^ (~(0xff)))

int main() {
       printf("%d\n", ((
    (b0000_0001) 
    | (b0000_0100) 
    | (b0000_1000) 
    | (b0001_0000) 
    | (b0010_0000) 
    | (b0100_0000))));
   printf("%d\n", led_format((
    (b0000_0001) 
    | (b0000_0100) 
    | (b0000_1000) 
    | (b0001_0000) 
    | (b0010_0000) 
    | (b0100_0000))));
   return 0;
}
