#include <iostream>
using namespace std;
void fun(){
    int x,y,n,a,b;
    cin>> a>>b>>n;
    if(a%b==0){
        cout<<-1<<endl;
    }else{
        if(n%a==0){
            if(n%b==0){
                cout<<n+a<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }else{
            n=(n/a+1)*a;
            if(n%b==0){
                cout<<n+a<<endl;
            }
            else{
                cout<<n<<endl;
            }

        }
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