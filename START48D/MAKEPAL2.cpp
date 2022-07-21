#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int x, o = 0, z = 0;
    cin >> x;
    char ch[x];
    char ne[x];
    cin >> ch;

    for (int i = 0; i < x; i++)
    {
        if (ch[i] == '1')
        {
            o++;
        }
        else
        {
            z++;
        }
    }
    if (z > o)
    {
        for (int i = 0; i < z; i++)
        {
            cout<<'0';
        }
    }else{
       for (int i = 0; i < o; i++)
        {
            cout<<'1';
        } 
    }
    cout<<endl;
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
