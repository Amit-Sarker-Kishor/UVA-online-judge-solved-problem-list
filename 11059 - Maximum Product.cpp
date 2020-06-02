#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,cs=1;
    while(scanf("%lld",&n)!=EOF)
    {
        ll A[20];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        ll output=0;
        for(ll i=0 ; i<n ; i++)
        {
            ll multi=A[i];
            if(multi>output)
                output=multi;
            for(ll j=i+1 ; j<n ; j++)
            {
                multi*=A[j];
                if(multi>output)
                output=multi;
            }
        }
        cout<<"Case #"<<cs++<<": The maximum product is ";
        cout<<output<<"."<<endl<<endl;
    }
    return 0;
}
