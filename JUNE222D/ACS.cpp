#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
    int x;
    cin>> x;
    int ac=x%100+x/100;
    if(ac<11){
        cout<<x%100+x/100<<endl;
    }else{
        cout<<-1<<endl;
    }
    
    }
	// your code goes here
	return 0;
}

