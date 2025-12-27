// Learning Bit Manipulation
#include <stdint.h>
#include <stdio.h>
int main(){

    uint8_t x = 10;
    uint8_t y = 0;
    int bit;
    // Decimal to Binary print hanney
    printf("Decimal value = %d", x);
    printf("\nBinary value: ");
    for(int i = 7; i >= 0 ;i--){
        printf("%u", ((x >> i) & 1));
        if(i % 4 == 0) printf(" "); // I like [0000 0000] representation
    }

    // Binary lai aaba reverse hanney
    for(int i = 0; i < 8; i++){
        bit = x & 1;
        y = (y << 1) | bit;
        x >>= 1;
    }

    //aaba printing tyo reversed wala binary
    printf("\nDecimal after reversing: %u", y);
    printf("\nBinary value after reversing: ");
    for(int i = 7; i >= 0 ;i--){
        printf("%u", ((y >> i) & 1));
        if(i % 4 == 0) printf(" "); 
    }
    printf("\n");
    return 0;
}