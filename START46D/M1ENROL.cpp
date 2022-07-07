#include <iostream>
using namespace std;
void fun(){
    int x,y,c=0;
    cin>> x>>y;
    if(x>y){
        cout<<0<<endl;
    }
    else{
        cout<<y-x<<endl;
    }
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
