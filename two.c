#include <stdio.h>
#include <string.h>
int main()
{
    char string[25];
    printf("Enter your string\n");
    scanf("%s", string);
    strupr(string);
    int count = 0;
    int len = strlen(string);
    for(int i = 0; i<len;i++){
        if(i+1 == len){
            break;
        }
        if(string[i] == string[i+1])
            continue;
        count++;   
    }
    printf("There is change in letters: %d times.", count);
    return 0;
}
