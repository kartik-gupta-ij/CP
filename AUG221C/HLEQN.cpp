
#include <iostream>
using namespace std;
void fun(){
    int x;
    cin>>x;
    for(int i=0;i*i<x;i++){
        if((x-2*i)%(2+i)){
            cout<<"YES"<<endl;
            return;

        }
    }
    cout<<"NOs"<<endl;


    
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
