#include <iostream>
using namespace std;

void fun(){
    int x,y,z;
    cin>> x>>y>>z;

    if(x>=y+2*z){
cout<<"YEs"<<endl;
    }
    else{
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