#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<=0)
            cout<<"1\n";
        else if(n==1)
            cout<<"2\n";
        else
        {
            ll temp=2,multi=1;
            for(ll i=n-1 ; i<=n ; i++)
                {
                    if(i%temp==0)
                    {
                        multi*=i/temp;
                        temp=1;
                    }
                else
                    multi*=i;
                }
            cout<<multi+2<<endl;
        }

    }
}
