#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        ll A[105];
        for(ll i=1 ; i<=n ; i++)
        {
            A[i]=i;
        }
        for(ll i=1 ; i<=m ; i++)
        {
            A[i]=1;
        }
        ll B[105];
        for(ll i=1 ; i<=(n-m) ; i++)
        {
            B[i]=i;
        }
        for(ll i=1 ; i<=(n-m) ; i++)
        {
            for(ll j=1 ; j<=n ; j++)
            {
                if(A[j]%i==0)
                {
                    A[j]/=i;
                    B[i]=1;
                    break;
                }
            }
        }
        ll sum=1,down=1;
        for(ll i=1 ; i<=(n-m) ; i++)
        {
            down*=B[i];
        }
        for(ll i=1 ; i<=n ; i++)
        {
            sum*=A[i];
        }
        cout<<n<<" things taken "<<m<<" at a time is ";
        cout<<sum/down;
        cout<<" exactly."<<endl;
    }
    return 0;
}
