#include <stdio.h>
typedef struct complex{
    int real ;
    int img;
}comp;

void displaycom(comp a){
    printf("x+iy=%d+i%d\n",a.real,a.img);
}

int main()
{
    comp arr[5];
    for(int i =0;i<5;i++){
        printf("enter real part for %d complex number \n",i+1);
        scanf("%d",&arr[i].real);
        printf("enter img part for %d complex number \n",i+1);
        scanf("%d",&arr[i].img);
    }
    for(int i =0;i<5;i++){
        printf("complex %d : ",i+1);
         displaycom(arr[i]);
     }
     
    return 0;
}