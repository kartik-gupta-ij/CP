#include <iostream>
using namespace std;

void fun(){
    int x,y,z;
    cin>> x>>y>>z;

if(x%y==0){
    cout<<(x/y)*z<<endl;
}else{
    cout<<((x/y)+1)*z<<endl;
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