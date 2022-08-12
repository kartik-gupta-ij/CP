
#include <iostream>
using namespace std;
void fun(){
    int x;
    cin>>x;
    int i;
    if(x%2){
        for(i=x;i>0;i=i-2){
            cout<<i<<" ";
        }
        
        for(i=2;i<x;i=i+2){
            cout<<i<<" ";
        }
    }else{
    
        for(i=x-1;i>0;i=i-2){
            cout<<i<<" ";
        }
        
        for(i=2;i<=x;i=i+2){
            cout<<i<<" ";
    }
    }
    
    cout<<endl;
    
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
