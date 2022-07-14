#include <iostream>
using namespace std;

void fun(){
    int x;
    cin>>x;
    cout<<(x*60)/20<<endl;
}


int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    }
	return 0;
}