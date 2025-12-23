#include <stdio.h>
int main(){
    int num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num >= 10){
        sum = 0;
        while(num != 0){
            sum+=num % 10;
            num /= 10;
        }
        num = sum;
    }
    printf("Output: %d", num);
    return 0;
}