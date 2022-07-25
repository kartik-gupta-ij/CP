#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return( (n * fact(n-1))%998244353);
}


void fun(){
    int x,o=0,e=0,z=0,m=0;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }

    for(int i=0;i<x;i++){
        if(ar[i]==1){
            o++;
            }
            else{
                z++;
            }
    }
    m=fact(x);
    e=o*(o+1)*m/2-z*(z+1)*m/2;
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