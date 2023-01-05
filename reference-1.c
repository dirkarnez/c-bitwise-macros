#include <stdio.h>

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
    printf("%d\n", led_format(0b01111101));
    return 0;
}
