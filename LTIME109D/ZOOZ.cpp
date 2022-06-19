#include<stdlib.h>
#include <stdio.h>
#include <cmath>
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
    int x;
    string str;
    str="1";
    scanf("%d",&x) ;
    for(int i=2;i<x;i++){
        str=str+"0";
    }
    str=str+"1";
    
    
    cout << str << "\n";
    

}