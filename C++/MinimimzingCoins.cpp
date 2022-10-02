#include <bits/stdc++.h>
using namespace std;
int dp[1000001];

int solve(int n,int a[],int sum)
{
    for(int i=0;i<n;i++)
    {
        dp[a[i]]=1;    
    }
    dp[0]=0;

    for(int i = 1;i<=sum;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i-a[j] <= 0)
            {
                continue;
            }
            dp[i] = min(dp[i-a[j]] + 1 , dp[i]) ;
        }
    }
    if(dp[sum]>sum)
        return -1;

    return dp[sum];
}
int main()
{

        memset(dp,1000001,sizeof(dp) );
        
        int n,x;
        cin>>n>>x;
        int mini = INT8_MAX;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        
        
        cout<<solve(n,a,x);

}
