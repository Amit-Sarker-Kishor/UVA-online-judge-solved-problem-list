#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll notprime[46340];
    ll Prime[46340],p=1;
    memset(notprime,0,sizeof(notprime));
    notprime[1]=1;
    for(ll i=3 ; i<=46340 ; i+=2)
    {
        if(notprime[i]==1)
            continue;
        for(ll j=i+i ; j<=46340 ; j+=i)
        {
            notprime[j]=1;
        }
        Prime[p]=i;
        p++;
    }
    Prime[0]=2;
    ll n;
    while(cin>>n && n!=0)
    {
        cout<<n<<" = ";
        bool anotherOccurance=false;
        if (n < 0)
        {
            n *=-1;
            cout<<"-1";
            anotherOccurance = true;
        }

        else if (n == 1)
            cout<<"1";
        for(ll i=0 ; Prime[i] * Prime[i] <= n && i < 4792 ; i++)
        {
            ll cnt=0;
            while(n%Prime[i]==0)
            {
                n=n/Prime[i];
                if(anotherOccurance)
                    cout<<" x "<<Prime[i];
                else
                    cout<<Prime[i];
                anotherOccurance=true;
                //cnt++;
            }
            /*if(cnt>0)
            {
                for(ll j=1 ; j<cnt ; j++)
                {
                    cout<<" x "<<Prime[i];
                }
            }*/
        }
        if(n>1)
            {
                if(anotherOccurance)
                    cout<<" x "<<n;
                else
                    cout<<n;
            }
        cout<<endl;
    }
    return 0;
}
