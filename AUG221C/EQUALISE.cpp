
#include <iostream>
using namespace std;
int Prefect_square_of_2(int x){
    if(x==0){
        return 0;
    }
    else if(x==1 or x==2){
        return 1;
    }
    else{
        if(x%2==1){
            return 0;
        }
        else{
            return Prefect_square_of_2(x/2);
        }
    }
}
void fun(){
    int x,y;
    cin>>x>>y;
    
    
    if(Prefect_square_of_2(x/y) and x%y==0){
        cout<<"YES";
    }else if(Prefect_square_of_2(y/x) and y%x==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
    
   
}



int main() {
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        fun();
    
    }
	
	return 0;
}
