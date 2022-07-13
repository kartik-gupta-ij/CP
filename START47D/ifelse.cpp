#include <iostream>
using namespace std;

void fun(){
    int x;
    cin>>x;
    if(x>=1 and x<100){
        cout<<"ESSAY"<<endl;
    }else if(x>=100 and x<200){
        cout<<"MEDIUM"<<endl;
    }else if(x>=200 and x<=300){
        cout<<"HARD"<<endl;
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