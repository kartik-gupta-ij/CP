#include <stdio.h>

int main()
{
    FILE *ptr;
    int a,b,c;
    ptr=fopen("text.txt","r");
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);
    fscanf(ptr,"%d",&c);
    printf("%d\n",c);
    fscanf(ptr,"%d",&b);
    printf("%d\n",b);
    return 0;
}