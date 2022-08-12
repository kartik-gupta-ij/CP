#include <iostream>
#include <cstdlib>
using namespace std;
void fun(){
    int x,y;
    cin>> x>>y;
    if(abs(x-y)%2){
     cout<<abs(x-y)/2+1<<endl;  
     return;
    }
    cout<<abs(x-y)/2<<endl;
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
