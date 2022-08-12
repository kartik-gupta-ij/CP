
#include <iostream>
using namespace std;
void fun(){
    int a[4],flag=0;
    
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    if((a[0]-a[2])<(a[1]-a[3])){
        cout<<"First"<<endl;
    }else if((a[0]-a[2])>(a[1]-a[3])){
        cout<<"Second"<<endl;
    }else if((a[0]-a[2])==(a[1]-a[3])){
        cout<<"Any"<<endl;
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
