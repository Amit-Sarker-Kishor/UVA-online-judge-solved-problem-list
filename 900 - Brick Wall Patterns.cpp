#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[100];
ll fbb(ll n)
{
    if(n<=1)
        return 1;
    if(dp[n]>0)
        return dp[n];
    dp[n]=fbb(n-1)+fbb(n-2);
    return dp[n];
}
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        cout<<fbb(n)<<"\n";
    }
    return 0;
}
