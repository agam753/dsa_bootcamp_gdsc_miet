#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

vector<long long> arr;

void precompute()
{
    // Code Here
    for(int i = 0;i<63;i++)
    {
        for(int j = i+1;j<63;j++)
        {
            for(int k = j+1;k<63;k++)
            {
                long long curr = (1ll<<i) + (1ll << j) + (1ll << k);
                arr.push_back(curr);
            }
        }
    }
    
    sort(arr.begin(), arr.end());
}
    
long long solve(long long l, long long r){
    precompute();
    
    long long lb = lower_bound(arr.begin(), arr.end(),l) - arr.begin();
    long long ub = upper_bound(arr.begin(), arr.end(),r) - arr.begin();
    
    return ub - lb;
}

int main()
{
    long long l,r;
    cin>>l>>r;

    cout<<solve(l, r)<<endl;;
    
    
    return 0;
}