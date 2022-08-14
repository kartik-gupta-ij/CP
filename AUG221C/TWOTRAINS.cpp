
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
    
    int extra_time=0;
    int total_time=0;
    int i=0;
    while(i!=x-1){
        if(arr[i]>=arr[i+1]+extra_time && arr[i+1]!=0){
            total_time=total_time+arr[i]+extra_time;
            extra_time=0;
        }else{
            total_time=total_time+arr[i]+extra_time;
            extra_time=arr[i+1];
        }
        i++;

    }
    if(extra_time>0){
        total_time=total_time+extra_time;
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
