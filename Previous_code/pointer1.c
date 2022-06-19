#include <stdio.h>
void pri(int a){
    printf("address %u \n",&a);
}
int main()
{
    int i;
    i=0;
    printf("address %u \n",&i);
    pri(i);
    return 0;
} 