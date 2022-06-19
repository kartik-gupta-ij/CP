#include <stdio.h>
#include <string.h>

int main()
{
    int c=0;
char str[]="ram ke aaaapapa";
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'){
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}                   