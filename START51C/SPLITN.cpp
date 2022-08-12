
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxPowerIn(int flag){
    int x=2;
    while((flag+1)>x){
        x=x*2;
    }
    return x/2;
}
void fun(){
    int flag=0,count=0;
    cin>>flag;
    
  
    while(flag>2){
    if(flag==maxPowerIn(flag)){
        cout<<count<<endl;
        return;
    }
        flag=flag-maxPowerIn(flag);
        count++;
    }
    cout<<count<<endl;
    
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
