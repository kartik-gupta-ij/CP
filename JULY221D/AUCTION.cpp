
#include <iostream>
using namespace std;
void fun(){
    int x,y,z;
    cin>> x>>y>>z;
    if(x>y and x>z){
        cout<<"Alice"<<endl;
    }
    else if(y>x and y>z){
        cout<<"Bob"<<endl;
    }
    else if(z>x and z>y){
        cout<<"Charlie"<<endl;
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
