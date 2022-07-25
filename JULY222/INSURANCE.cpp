#include <iostream>
using namespace std;

void fun(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<x<<endl;
    }else {
        cout<<y<<endl;
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