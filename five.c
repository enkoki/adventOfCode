#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(){
    uint32_t num = 1337671203;
    int binary[32];
    uint32_t result = 0;
    // printf("Enter a 32-bit unsinged integer: ");
    // scanf("%u", &num);

    for(int i = 0; i < 32; i++){
        binary[i] = num % 2;
        num /= 2;
    }

    for(int i = 31; i >= 0;i--){
        result += binary[i] << (31-i);
    }
    printf("Output: %u", result);
    return 0;
}