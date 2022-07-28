
#include <iostream>
using namespace std;
void fun(){
    int a[3],flag=0;
    
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    if(a[0]==a[1] && a[2]>=a[1]){
        cout<<"YES"<<endl;
    }else if(a[2]==a[1] && a[0]>=a[1]){
        cout<<"YES"<<endl;
    }else if(a[2]==a[0] && a[1]>=a[2]){
        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
