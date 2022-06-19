#include <stdio.h>
void revese(int *a_of_arr,int i);
int main()
{
    int i;
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
    revese(arr,i);
        for (int j = 0; j < i; j++)
    {
        printf("enter the %d value of array is %d\n",j,arr[j]);
    }
    return 0;
    
}

void revese(int *a_of_arr,int i){
        int temp

 ;   for (int j = 0; j < (i/2); j++)
    {
        temp=a_of_arr[j];
        a_of_arr[j]=a_of_arr[i-j-1];
a_of_arr[i-j-1]=temp;
    }
}