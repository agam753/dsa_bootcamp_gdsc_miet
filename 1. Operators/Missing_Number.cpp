#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

//EXAMPLE:
/* N = 8 
   A[] = {1, 2, 4, 6, 3, 7, 8}
   ---> 5
   total sum---> n*(n+1)/2
         8*9/2=== 36
    sum = 31

    totalsum - sum = 5;

*/

int missingNumber(int A[], int N)
{
    int n = N - 1;
    int totalSum = N * (N+1)/2;
    int sum = 0;

    for(int i = 0;i < n;i++)
    {
        sum += A[i];
    }

    int ans = totalSum - sum;


    return ans;


}

int main()
{

    int n;
    cin>>n;

    int arr[n+1];
    for(int i = 0;i<n-1;i++)
    {
        cin>>arr[i];
    }

    cout<<missingNumber(arr, n);

    return 0;
}