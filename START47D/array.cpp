#include <iostream>
using namespace std;

void fun(){
    int x,o=0,e=0;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }
    for(int i=0;i<x;i++){
        if(ar[i]==1){
            o=i;
        }
    }
    for(int i=0;i<x;i++){
        if(ar[i]==x){
            e=x-i-1;
        }
    }
    if(o>e){
        cout<<e+o-1<<endl;
    }else{cout<<e+o<<endl;}
    
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}