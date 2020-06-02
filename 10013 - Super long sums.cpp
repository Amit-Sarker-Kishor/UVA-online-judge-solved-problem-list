#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[1000010],B[1000010],C[1000010];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>A[i]>>B[i];
        }
        int carry=0,sum;
        for(ll i=n-1 ; i>=0 ; i--)
        {
            sum=A[i]+B[i]+carry;
            C[i]=sum%10;
            carry=sum/10;
        }
        if(carry>0)
            cout<<carry;
        for(int i=0 ; i<n ; i++)
            cout<<C[i];
        cout<<"\n";
        if(t)
            cout<<"\n";
    }
    return 0;
}
