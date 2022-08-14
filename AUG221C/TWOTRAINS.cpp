
#include <iostream>
using namespace std;
void fun(){
    int x;
    cin>>x;
    int arr[x]={0};
    for(int i=0;i<x-1;i++){
        cin>>arr[i];
    }

    if(x==2){
        cout<<arr[0]*2<<endl;
        return;
    }
    
    int btw=0;
    int total_time=0;
    int i=0;
    while(i!=x-1){
        if(btw<arr[i]){
            total_time=arr[i]+total_time;
            btw=arr[i];

        }
        else{
            total_time=arr[i]+total_time;

        }
        i++;

    }
    if(btw>0){
        total_time=total_time+btw;
    }


    cout<<total_time<<endl;
    
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
