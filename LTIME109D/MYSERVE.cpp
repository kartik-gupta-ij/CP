#include<stdlib.h>
#include <stdio.h>
#include <cmath>
void end();
int main()     
{
  int n;
  scanf("%d",&n);
   for (int i = 0; i < n; ++i)
  {
    end();
  }
  return 0;
      
}


void end (){
    int x,y;
    scanf("%d %d",&x,&y) ;

    int c=x+y;
    if(c%4<2){
        printf("Alice\n");
    
    }
    else
    {
        printf("BOB\n");
    }

}