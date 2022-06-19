#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char str[500];
    strcpy(str,"daily dose of internet");
    len=strlen(str);
    printf("length of %s is %d",str,len);

    return 0;
}