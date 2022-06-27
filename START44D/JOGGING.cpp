#include <iostream>
using namespace std;
void fun(){
        int x,y,sum=0;
    cin>> y >>x;
    sum=x;
    for(int i=1;i>y;i++){
        sum=x*sum;
    }
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	// your code goes here
	return 0;
}
