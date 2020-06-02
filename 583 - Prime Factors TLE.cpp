#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        ll cpyn,A[2000],id=0;
        cout<<n<<" = ";
        if(n<0)
            cout<<"-1 x ";
        n=abs(n);
        cpyn=n;
        bool nPrime=true;
        for(ll i=2 ; i*i<n ; i++)
        {
            if(n%i==0)
                nPrime=false;
            bool IsPrime=true;
            for(ll j=2 ; j*j<i ; j++)
            {
                if(i%j==0)
                    IsPrime=false;
            }
            if(IsPrime)
            {
                //cout<<i<<" ";
                while(cpyn%i==0)
                {
                    A[id++]=i;
                    cpyn=cpyn/i;
                }
            }
        }
        if(nPrime)
            cout<<n<<endl;
        else
        {
            for(ll i=0 ; i<id-1 ; i++)
                cout<<A[i]<<" x ";
            cout<<A[id-1];
            if(cpyn>1)
                cout<<" x "<<cpyn;
            cout<<endl;
        }
    }
    return 0;
}
