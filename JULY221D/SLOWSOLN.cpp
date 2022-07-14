
#include <iostream>
using namespace std;
void fun(){
    int t,n,nsum;
    cin>> t>>n>>nsum;
    if(nsum>=t*n){
        cout<<n*n*t<<endl;
    }else{
        cout<<n*n*(nsum/n)+(nsum%n)*(nsum%n)<<endl;
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
