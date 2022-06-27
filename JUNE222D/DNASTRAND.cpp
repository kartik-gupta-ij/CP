#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
    int x;
    
    cin>> x ;
    char str[100];
    cin>>str;
    for(int i =0;i<x;i++){
        if(str[i]=='A') {str[i]='T';}
        else if (str[i]=='T') {str[i]='A';}
        else if (str[i]=='C') {str[i]='G';}
        else{ str[i]='C';}
    }
    cout<<str<<endl;
    }
	// your code goes here
	return 0;
}


