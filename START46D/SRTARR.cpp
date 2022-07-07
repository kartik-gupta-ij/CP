#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int x,c=0;
    cin >> x ;
    char ch[x];
    cin>> ch;
    
    for(int i=0;i<x-1;i++){
        if(ch[i]=='1' and ch[i+1]=='0'){
            c++;
        }
    }
    cout<<c<<endl;
}   

 




int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        fun();
    }
    return 0;
}
