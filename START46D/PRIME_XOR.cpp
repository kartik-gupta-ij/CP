#include <bits/stdc++.h>
using namespace std;


void fun(){
    int x,y,z;

    cin>> x>>y;
    z=x^y;
    int ar[3]={2};
    if(x%2 and y%2){
        ar[2]=x^2;
        ar[1]=y^2;


    }
    if(z%2 and y%2){
        ar[2]=y^2;
        ar[1]=z^2;

    }
    if(x%2 and z%2){
        ar[2]=x^2;
        ar[1]=z^2;
        }
    sort(ar, ar + 3);
    cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;


    
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}