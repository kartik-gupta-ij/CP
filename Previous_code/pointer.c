#include <stdio.h>

int main()
{
    int n,*p;
    n=10;
    p=&n;
    printf("loction of the n is %u \n",p);
    printf("value of the n is %d \n",*p);
    return 0;
}
