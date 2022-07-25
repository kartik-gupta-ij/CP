#include <iostream>
using namespace std;



void fun(){
    int x,o=0;
    long e=0;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }

    for(int i=0;i<x;i++){
        if(ar[i]==1){
            o++;
            e=e+o;
        }else{
            o=0;
        }
        
    }
    cout<<e<<endl;
}

int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}