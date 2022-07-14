
#include <iostream>
using namespace std;
void fun(){
    int x,y;
    cin>> x>>y;
    if(y>=x){
        cout<<0<<endl;
        
    }
    else{
        if((x-y)%4==0)
        cout<<(x-y)/4<<endl;
        else{
            cout<<(x-y)/4+1<<endl;
        }
        
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
