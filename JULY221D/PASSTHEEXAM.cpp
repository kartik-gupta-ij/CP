
#include <iostream>
using namespace std;
void fun(){
    int x,y,z;
    cin>> x>>y>>z;
    if(x>=10 and z>=10 and y>=10 and x+y+z>=100 ){
        cout<<"PASS"<<endl;
    }
    else {
        cout<<"FAIL"<<endl;
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
