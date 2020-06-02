#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,A[100+5],B[100+5],I[100+5];
        cin>>n>>m;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        ll pr=1;
        for(ll i=0 ; i<n ; i++)
        {
            if(A[i]>A[m])
            {
                pr++;
                for(long long j=i+1 ; j<n ; j++)
                {
                    if(A[j]>=A[m])
                        pr++;
                }
            }
        }
        cout<<pr<<endl;
    }
}
