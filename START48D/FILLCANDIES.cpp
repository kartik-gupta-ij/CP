
#include <iostream>
using namespace std;
void fun(){
    int n,m,k;
    cin>> n>>m>>k;
    if((n%(m*k))==0){
        cout<<n/(m*k)<<endl;
    }else{
        cout<<n/(m*k)+1<<endl;

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
