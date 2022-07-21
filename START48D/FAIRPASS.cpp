#include <iostream>
using namespace std;

void fun(){
    int x,y;
    cin>>x>>y;
    if(x+1<=y){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
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