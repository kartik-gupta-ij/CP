#include <stdio.h>
#include <string.h>

void copy(char *input, char *output){
    int l;
    l= strlen(input);

    for(int i=0;i<l;i++){
        output[i]=input[i];
    }
}

int main()
{
    char input[]="kartik";
    char output[50];
    copy(input,output);
    printf("%s\n",output);
    return 0;
}