#include <iostream>
using namespace std;

void fun(){
    int x;
    cin>> x;

    
if(x%3==0){
    cout<<0<<endl;
}else{
    if(x%3==1){
     cout<<2<<endl;   
    }
    else{cout<<1<<endl;}
    
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