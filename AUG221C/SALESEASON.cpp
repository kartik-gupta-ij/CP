
#include <iostream>
using namespace std;
void fun(){
    int x;
    cin>>x;
    if(x<=100){
        cout<<x;
    }else if(x<=1000 and x>100){
        cout<<x-25;
    }else if(x<=5000 and x>1000){
        cout<<x-100;
        
    }else{
        cout<<x-500;
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
