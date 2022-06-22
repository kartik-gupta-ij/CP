#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
    int x,y;
    cin>> x >>y;
    if(x>y){
        cout<<7-x<<endl;
    }else{
        cout<<7-y<<endl;
    }
    }
	// your code goes here
	return 0;
}
