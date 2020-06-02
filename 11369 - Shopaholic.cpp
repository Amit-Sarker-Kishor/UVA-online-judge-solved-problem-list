#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,A[20000];
        cin>>n;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n,greater<ll>());
        ll bouns_sum=0;
        for(ll i=2 ; i<n ; i+=3)
           bouns_sum+=A[i];
        cout<<bouns_sum<<endl;
    }
    return 0;
}
