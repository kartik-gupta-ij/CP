#include <iostream>
using namespace std;

void fun(){
    int x1,y1,x2,y2;
    cin>> x1>>y1>>x2>>y2;
    if( abs(x1-x2)%2==1 and abs(y1-y2)%2==0){
        cout<<"NO"<<endl;
    }else if( abs(x1-x2)%2==0 and abs(y1-y2)%2==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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