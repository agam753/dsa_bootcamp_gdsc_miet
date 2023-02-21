#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

int maxSubarray(vector<int> &nums)
{
    // Kadane's algorithm

    int Maxsum = INT_MIN;
    int sum = 0;

    for(int i = 0;i<nums.size();i++)
    {
        sum += nums[i];

        if(sum > Maxsum)
        {
            Maxsum = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }

    return Maxsum;

    //Bruteforce approach 
    // int Maxsum = INT_MIN;
    // int n = nums.size();

    // for(int i = 0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j = i;j<n;j++)
    //     {
    //         sum += nums[j];
    //         if(sum > Maxsum)
    //         {
    //             Maxsum = sum;
    //         }
    //     }
    // }

    // return Maxsum;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> v;
    for(int i = 0 ;i < n; i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    cout<<maxSubarray(v);
    
    return 0;
}