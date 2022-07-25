#include <iostream>
using namespace std;
void fun(){
    int x,y,n,r,a,b;
    cin>> x>>y>>n>>r;
    if(x*n>r){
        cout<<-1<<endl;
    }
    else{
        b=(r-n*x)/(y-x);
        a=n-b;
        if(n<b){
            cout<<0<<" "<<n<<endl;
            return;
        }
        cout<<a<<" "<<b<<endl;
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