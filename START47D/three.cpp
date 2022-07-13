#include <iostream>
using namespace std;

void fun(){
    int x;
    cin>>x;
    
    if(x==1 or x==3 or x==5){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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