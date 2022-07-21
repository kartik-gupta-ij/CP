#include <iostream>
using namespace std;

void fun(){
    int x,y;
    cin>>x>>y;
    if(x%2==0 && y%2==0){
        cout<<0<<endl;
    }else if (x%2==1 && y%2==0){
        cout<<y<<endl;
    }else if (x%2==0 && y%2==1){
        cout<<x<<endl;
    }else{cout<<x+y-1<<endl;}
    
    
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}