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
    int cf,df;
    scanf("%d %d",&x,&y) ;
    if(x%10!=0){
        cf=x/10+1;
    }else{
        cf=x/10;

    }
    if(y%10!=0){
        df=y/10+1;
    }else{
        df=y/10;

    }
    printf("%d \n",abs(df-cf));

}