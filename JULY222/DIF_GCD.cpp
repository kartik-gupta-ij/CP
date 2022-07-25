#include <iostream>
using namespace std;

void fun(){
    int a,b,x=0;
    cin>>a>>b;
    for(int i=0;i<=b-a;i++){
        x=i;
        for(int j=0;j<=i;j++){
         
        if(((b-j)%(a+i-j))==0){
            cout<<a+i-j<<" "<<b-j<<endl;
            return;
            }
        }
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