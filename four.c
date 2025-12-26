#include <stdio.h>
#include <stdlib.h>

int main() {
    char *operations[] = {"13","-6","-10","19","14","6","+","-5","C","20","C"};
    int n = 11, size = 0, sum = 0; ;
    int records[11];

    for(int i = 0; i < n; i++){
        char *holder = operations[i];
        if((holder[0] >= '0' && holder[0] <= '9') || holder[0] == '-') {
            records[size] = atoi(holder);
            size++; 
        }else if(holder[0] == '+'){ 
            if(size >= 2) {
                records[size] = records[size-1] + records[size-2]; 
                size++;
            }
        }else if(holder[0] == 'D'){ 
            if(size >= 1) {
                records[size] = 2 * records[size-1]; 
                size++;
            }
        }else if(holder[0] == 'C'){ 
            if(size >= 1) {
                size--; 
            }
        }
    }
    for(int i = 0; i < size; i++){
        sum += records[i];
    }

    printf("⚾ The final score is %d!! ⚾\n", sum);
    return 0;
}
