#include <stdio.h>

void slice(char *str,int m,int n){
    int i =0;
    while((m+i)<n){
        str[i]=str[m+i];
        i++;
    }
    str[i]='\0';
}

int main()
{
    char str[50]="hakt Dsjh ccxzjch ";
    printf("%s\n",str);
    slice(str,2,4);
    printf("%s",str);
    return 0;
}

