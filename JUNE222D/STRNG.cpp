
#include <bits/stdc++.h>
using namespace std;

int checkPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    // Check from 2 to half of arr[i]
    for (int j = 2; j <= num / 2; j++)
    {
        if (num % j == 0)
        {
            return 0;
        }
        return 1;
    }
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main2()
{
    int x;
    cin >> x;

    int arr[x];

    for (int i = 0; i < x; ++i)
    {
        cin >> arr[i];
    }
    int result = arr[0];
    for (int i = 1; i < x; i++)
    {
        result = gcd(arr[i], result);

        // if(result == 1)
        // {
        //   return 1;
        // }
    }

    if (result == 1)
    {
        int count = 0;
        int isprime = 0;
        for (int i = 0; i < x; i++)
        {
            isprime = checkPrime(arr[i]);
            if (isprime == 1)
                count = count + 1;
        }
        if (count == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            
        }
    }
    else
    {
        cout << x << endl;
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
        int x;
        x = main2();
    }
}
