#include <stdio.h>
int main(){
    int num, n1, n2;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(1){
        n1 = num / 10;
        n2 = num % 10;
        int sum = n1 + n2;
        num = sum;
        if(num < 10){
            break;
        }
    }
    printf("Output: %d", num);
}