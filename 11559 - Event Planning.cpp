#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b,h,w;
    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)==4)
    {
        ll mn=10500;
        for(ll i=0 ; i<h ; i++)
        {
            ll price;
            ll seat,mx=0;
            cin>>price;
            for(ll j=0 ; j<w ; j++)
            {
                cin>>seat;
                if(seat>mx)
                    mx=seat;
            }
            if(mx>=n && n*price<=b)
            {
                if(price<mn)
                    mn=price;
            }
        }
        if(mn>10000)
            cout<<"stay home\n";
        else
            cout<<mn*n<<endl;
    }
    return 0;
}
