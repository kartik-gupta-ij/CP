#include <iostream>
using namespace std;

int main2(){
    int m,n;
    cin>> m >>n;
    if(m>n){
        for(int i=1;i<m+1;i=i++){
        for(int j=1;j<2*n;j=j+2){
            cout<<i*j<<" ";
        }
        cout<<endl;
        
    }}
    else{    
        for(int i=1;i<2*m;i=i+2){
        for(int j=1;j<n+1;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }}
    

    return 0;

}

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++)
    {
        int x;
        x = main2();
    }
	return 0;
}


