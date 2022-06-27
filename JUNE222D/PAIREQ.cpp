
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int *arr, int n) {
// code here
int maxcount=0;
int element_having_max_freq;
for(int i=0;i<n;i++)
{
	int count=0;
	for(int j=0;j<n;j++)
	{
	if(arr[i] == arr[j])
		count++;
	}

	if(count>maxcount)
	{
	maxcount=count;
	element_having_max_freq = arr[i];
	}
	
}

return maxcount;
}

int main2(){
    int x;
    cin >>x;

    int arr[x] ;

    for (int i = 0; i < x; ++i)
    {
    cin >> arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n-mostFrequent(arr, n)<<endl;
	return 0;
}

// Driver program
int main()
{
    int n;
    cin >>n;
    for(int i =0;i<n;i++){
        main2();
    }
    

}


