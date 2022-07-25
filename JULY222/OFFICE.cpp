#include <iostream>
using namespace std;

void fun(){
    int x,y;
    cin>>x>>y;
    
        cout<<x*4+y<<endl;
    
    
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}