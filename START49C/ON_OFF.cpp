
// C++ program to implement
// the above approach
  
#include <bits/stdc++.h>
using namespace std;
void fun(){
    int m;
    cin>>m;
    string a,b;
    
    int c=1;
    cin>> a;
    cin>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            if(c==1){c=0;}
            else{c=1;}
        }
    }
    
        cout<<c<<endl;
    
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
