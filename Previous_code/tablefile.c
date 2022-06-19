#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("table.txt","w");
    for(int i=1; i<100 ;i++){
        for(int j=1;j<11;j++){
            fprintf(ptr,"%d * %d = %d",i,j,i*j);
            fprintf(ptr,"\n");
        }
        fprintf(ptr,"\n");
    }
    return 0;
}