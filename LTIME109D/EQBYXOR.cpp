
#include <iostream>
using namespace std;

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
    int x,y,z,m;
    scanf("%d %d %d",&x,&y,&z) ;
    m=x^y;
    if (x==y){
        printf("0");
    }
    else if(m<z){
        printf("1");
    }else if(m<z){
        printf("1");
    }

}
