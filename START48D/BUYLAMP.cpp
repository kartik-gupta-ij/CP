
#include <iostream>
using namespace std;
void fun(){
    int n,k,x,y;
    cin>> n>>k>>x>>y;
    if(x>y){
        cout<<x*k+y*(n-k)<<endl;
    }else{
        cout<<x*n<<endl;

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
