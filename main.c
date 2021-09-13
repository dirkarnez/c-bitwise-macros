#include <stdio.h>

#define IS_NTH_BIT_ONE(TARGET, NTH) (((TARGET) & (1 << NTH)) == (1 << NTH))
#define SET_NTH_BIT_TO_ONE(TARGET, NTH) ((TARGET) |= (1 << NTH))
#define SET_NTH_BIT_TO_ZERO(TARGET, NTH) ((TARGET) &= ~(1 << NTH))

int main() {
    unsigned char a = 2; //010
    
    if (IS_NTH_BIT_ONE(a, 1)) {
        printf("1th bit is one\n");
    }
    
    if (!IS_NTH_BIT_ONE(a, 2)) {
        printf("2th bit is not one\n");
    }
    
    SET_NTH_BIT_TO_ONE(a, 2);
    if (IS_NTH_BIT_ONE(a, 2)) {        
        printf("2th bit is one\n");
    }
    
    SET_NTH_BIT_TO_ZERO(a, 2);
    if (!IS_NTH_BIT_ONE(a, 2)) {
        printf("2th bit is not one\n");
    }
    
    return 0;
}
