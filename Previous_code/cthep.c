#include <stdio.h>
int cthep(int *arr,int n);
int main()
{
        int i;
        int p;
    printf("enter the No of element you want to fit in array\n :--");
    scanf("%d",&i);
    int arr[i];
    for (int j = 0; j < i; j++)
    {
        printf("enter the %d value of array\n::--",j);
        scanf("%d",&arr[j]);
    }
    for (int j = 0; j < i; j++)
    {
        printf("enter the %d value of array is %d\n",j,arr[j]);
    }
    p=cthep(arr,i);
    printf("postive ::--- %d",p);
    return 0;
}

int cthep(int *arr,int n){
    int p=0;
    for (int j = 0; j <n; j++)
    {
        if(arr[j]>0){
            p=p+1
     ;   }
    }
    return p;
}