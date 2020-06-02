#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[50005],nP[50005],cnt;
void seive()
{
    cnt=1;
    P[0]=2;
    nP[1]=1;
    for(ll i=3 ; i<50005 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(ll j=i+i ; j<50005 ; j+=i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
ll divisor(ll n)
{
    ll tD=1;
    for(ll i=0 ; i<cnt && n>1 ; i++)
    {
        ll cont=0;
        while(n%P[i]==0)
        {
            n=n/P[i];
            cont++;
        }
        tD*=cont+1;
    }
    return tD;
}
int main()
{
    ll t;
    seive();
    /*for(int i=0 ; i<10 ; i++)
        cout<<P[i]<<" ";*/
    cin>>t;
    while(t--)
    {
        ll l,u,mx=0,p;
        cin>>l>>u;
        for(ll x=l ; x<=u ; x++)
        {
            ll temp=divisor(x);
            if(temp>mx)
            {
                mx=temp;
                p=x;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", ";
        cout<<p<<" has a maximum of "<<mx<<" divisors.\n";
    }
    return 0;
}
