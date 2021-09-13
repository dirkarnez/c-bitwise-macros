#include <stdio.h>

#define IS_NTH_BIT_ONE(TARGET, NTH) (((TARGET) & (1 << NTH)) == (1 << NTH))
#define SET_NTH_BIT_TO_ONE(TARGET, NTH) ((TARGET) |= (1 << NTH))
#define SET_NTH_BIT_TO_ZERO(TARGET, NTH) ((TARGET) &= ~(1 << NTH))
#define TOGGLE_NTH_BIT(TARGET, NTH) ((TARGET ^= (1 << NTH)))

int main() {
    unsigned char a = 2; //010
    
    if (IS_NTH_BIT_ONE(a, 1)) {
        //010
        //-|-
        printf("1th bit is one\n");
    }
    
    if (!IS_NTH_BIT_ONE(a, 2)) {
        //010
        //|--
        printf("2th bit is not one\n");
    }
    
    SET_NTH_BIT_TO_ONE(a, 2);
    //010 becomes 110
    
    if (IS_NTH_BIT_ONE(a, 2)) {   
        //110
        //|--
        printf("2th bit is one\n");
    }
    
    SET_NTH_BIT_TO_ZERO(a, 2);
    //110 becomes 010
    
    if (!IS_NTH_BIT_ONE(a, 2)) {
        //010
        //|--
        printf("2th bit is not one\n");
    }
    
    if (!IS_NTH_BIT_ONE(a, 0)) {
        //010
        //--|
        printf("0th bit is not one\n");
    }
    
    TOGGLE_NTH_BIT(a, 0);
    //010 becomes 011
    
    if (IS_NTH_BIT_ONE(a, 0)) {
        //011
        //--|
        printf("0th bit is one\n");
    }
    
    return 0;
}
