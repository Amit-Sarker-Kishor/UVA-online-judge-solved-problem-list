#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll tt,n;
        scanf("%lld%lld",&tt,&n);
        while(tt--)
        {
            ll a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a==c && b==d)
                cout<<"0\n";
            else if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0)
            {
                if(c%2==0 && d%2==0 || c%2!=0 && d%2!=0)
                {
                    if(abs(a-c)==abs(b-d))
                        cout<<"1\n";
                    else
                        cout<<"2\n";
                }
                else
                    cout<<"no move\n";
            }
            else if(a%2==0 && b%2!=0 || a%2!=0 && b%2==0)
            {
                if(c%2==0 && d%2!=0 || c%2!=0 && d%2==0)
                {
                    if(abs(a-c)==abs(b-d))
                        cout<<"1\n";
                    else
                        cout<<"2\n";
                }
                else
                    cout<<"no move\n";
            }
            else
                cout<<"no move\n";
        }
    }
    return 0;
}
