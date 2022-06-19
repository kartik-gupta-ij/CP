#include <stdio.h>

typedef struct date{
    int d;
    int m;
    int y;
}date;

int main()
{
   date d1;
   d1.d=10;d1.m=11;d1.y=2021;
   printf("%d/%d/%d",d1.d,d1.m,d1.y) ;
    return 0;
}