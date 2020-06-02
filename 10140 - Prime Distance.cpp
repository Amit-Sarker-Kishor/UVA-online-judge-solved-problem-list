#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll P[46350],nP[46350],cnt=1,Mk[1000005];
void sieve(void)
{
    nP[0]=1;
    nP[1]=1;
    P[0]=2;
    for(ll i=3 ; i<46341 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(ll j=i+i ; j<46341 ; j+=i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    sieve();
    //cout<<cnt;
    ll low_lim,upper_lim;
    while(scanf("%lld%lld",&low_lim,&upper_lim)==2)
    {
        ll temp=low_lim;
        memset(Mk,0,sizeof(Mk));
        for(ll i=0 ; i<cnt ; i++)
        {
            ll j=low_lim/P[i];
            j=j*P[i];
            if(j<low_lim)
                j+=P[i];
            while(j<=upper_lim)
            {
                if(j!=P[i])
                    Mk[j-temp]=1;
                j+=P[i];
            }
        }
        //Mk[1]=1;
        if(low_lim==1)
            Mk[0]=1;
        ll k;
        for(ll i=low_lim ; i<=upper_lim ; i++)
        {
            if(Mk[i-temp]==0)
            {
                k=i;
                break;
            }
        }
        ll p=0,q=0,x=0,y=0,maxm=0,minm=pow(2,31)-1,pk=0;
        for(ll i=low_lim ; i<=upper_lim ; i++)
        {
            if(Mk[i-temp]==0)
            {
                pk++;
                if(i-k<minm && i!=k)
                {
                    minm=i-k;
                    p=k;
                    q=i;
                }
                if(i-k>maxm)
                {
                    maxm=i-k;
                    x=k;
                    y=i;
                }
                k=i;
            }
        }
        if(pk>1)        //2,3 are closest, 7,11 are most distant.
            {
                cout<<p<<","<<q<<" are closest, ";
                cout<<x<<","<<y<<" are most distant.\n";
            }
        else
            cout<<"There are no adjacent primes.\n";
    }
    return 0;
}
