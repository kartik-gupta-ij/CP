#include <stdio.h>
#include <string.h>

int main()
{
    char in[]="uncoded";
    char *ptr=in ;
    for(int i=0; i<strlen(in);i++){
        *ptr=*ptr+1;
        ptr++;
    }
    printf("%s\n",in);
    
    for(int i=0; i<strlen(in);i++){
        *ptr=*ptr-1;
        ptr--;
    }
    printf("%s\n",in);
    return 0;
}