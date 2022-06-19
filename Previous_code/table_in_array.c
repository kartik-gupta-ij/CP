#include <stdio.h>

int main()
{
    int arr[10],t;
    printf("Please enter the number for the table\n;:---");
    scanf("%d",&t);
    for(int i=0  ; i<10;i++){

        arr[i]=t*(i+1);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\t",arr[j]);
    }
    
    return 0;
}