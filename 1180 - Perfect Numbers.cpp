#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[99999],nP[99999];
void seive()
{
    ll cnt=1;
    P[0]=2;
    nP[1]=1;
    for(ll i=3 ; i<99999 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(ll j=i+i ; j<99999 ; j=j+i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    ll t;
    cin>>t;
    for(ll i=0 ; i<t ; ++i)
    {
        int n;
        scanf("%d,",&n);
        if(n==2 || n==3 || n==5 || n==7 || n==13)
            cout<<"Yes\n";
        else if(n==17 || n==19)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
