#include <bits/stdc++.h>
using namespace std;

int main2()
{
    int x, c = 0;
    cin >> x;
    int i;

    int arr[x];

    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for ( i= 0; i < x; ++i)
    {
        if (arr[i] == 1)
        {
            cout << "CHEF" << endl;
            return 0;
        }else if(arr[i]%2==1){
            c++;
        }
    }
    if (c % 2 == 1)
    {
        cout << "CHEF" << endl;
    }
    else
    {
        cout << "CHEFINA" << endl;
    }
    return 0;
}

// Driver program
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        main2();
    }
}
