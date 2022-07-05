#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int x, y, z, c = 0;
    cin >> x >> y >> z;

    int ar[101]={0},h[101]={0};
    for (int i = 0; i < x; i++)
    {
        cin >> ar[i];
    }

for (int i = 0; i < x; i++)
    {
         h[ar[i]]++;
    }

int i;
for ( i = 0; i < z; i++)
    {
         if(h[i]==0){
            cout<<"NO"<<endl;
            return;
         }
         else{
            c=c+h[i];
         }
    }
for ( i =z+1; i < 101; i++)
    {
        
            c=c+h[i];
         
    }

if(z>y){
    cout << "NO" << endl;
}
else if (c >= y)
    {        

        
        cout << "YES" << endl;
    }
    
    else
    {

        cout << "NO" << endl;
    }
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