#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200];
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0 ; i<n-1 ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
}
