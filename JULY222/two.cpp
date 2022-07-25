#include <bits/stdc++.h>
#include <iostream>
#include<cstring>
#include <stack>

using namespace std;

void fun(){
    int x, t1 ,t2;
    cin>>x;

    int ar[x];
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
        arr[i]=ar[i];
    }
    
    sort(arr, arr + x);
    t1=arr[0];

    for(int i=0;i<x;i++){
        if(arr[i]!=ar[i]){
            t2=ar[i];
        }
    }
    for(int i=0;i<x;i++){
        if(t1<=ar[i] && t2>ar[i]){
            t1=ar[i];
            
            cout<<t1<<endl;

        }else if( t2<ar[i]){
            t2=ar[i];
            cout<<t2<<endl;

        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

    
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}