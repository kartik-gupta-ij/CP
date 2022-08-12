
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(){
    int flag=0,count=0;
    cin>>flag;
    int a[flag];
    
    for(int i=0;i<flag;i++){
        cin>>a[i];
    }
    int max=(int)*max_element(a, a + flag);
  
    int hash[max+1]={};

    for(int i=0;i<flag;i++){

        hash[a[i]]=hash[a[i]]+1;
    }

    int max_ourrrence=*max_element(hash, hash + max+1);
    int max_ourrrence_count=std::count(hash, hash + max+1, max_ourrrence);
    if(max_ourrrence_count==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
