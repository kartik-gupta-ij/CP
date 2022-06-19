#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vect; 

vect sumVector(vect v1, vect v2){
 struct vector sum;
    struct vector *ptr;
    ptr=&sum;
    ptr->x=v1.x+v2.x;
    ptr->y=v1.y+v2.y;
 return sum;
}

int main()
{
    struct vector v1,v2 ,sum;
    struct vector *ptr;
    ptr=&v1;
    ptr->x=10;
    ptr->y=20;
    printf("%d  %d \n",v1.x,v1.y);
    ptr=&v2;
    ptr->x=40;
    ptr->y=27;
    printf("%d  %d \n",v2.x,v2.y);
    sum=sumVector(v1,v2);
    printf("%d  %d \n",sum.x,sum.y);
    return 0;
}