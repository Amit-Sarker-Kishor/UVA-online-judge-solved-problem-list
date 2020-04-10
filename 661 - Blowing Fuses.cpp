#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,c,t=1;
    while(scanf("%lld%lld%lld",&n,&m,&c)==3)
    {
        if(n==0 && m==0 && c==0)
            break;
        ll A[100+5];
        for(ll i=1 ; i<=n ; i++)
        {
            cin>>A[i];
        }
        ll sum=0,mx=0;
        for(ll i=0 ; i<m ; i++)
        {
            ll k;
            cin>>k;
            sum+=A[k];
            A[k]=-1*A[k];
            if(sum>mx)
                mx=sum;
        }
        cout<<"Sequence "<<t++<<endl;
        if(mx>c)
            cout<<"Fuse was blown.";
        else
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<mx<<" amperes.";
        }
        cout<<endl<<endl;
    }
    return 0;
}
