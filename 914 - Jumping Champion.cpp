#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[1000009],nP[1000009],cnt;
void seive(void)
{
    nP[1]=1;
    nP[0]=1;
    P[0]=2;
    cnt=1;
    for(ll i=3 ; i<1000009 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(ll j=i+i ; j<1000009 ; j+=i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    seive();
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,u;
        cin>>l>>u;
        ll i=0;
        while(P[i]<=l)
        {
            if(P[i]==l)
                break;
            i++;
        }
        ll counts[260],store[260];
        memset(counts,0,sizeof(counts));
        memset(store,0,sizeof(store));
        for(ll j=i+1 ; P[j]<=u ; j++)
        {
            ll diff=P[j]-P[j-1];
            counts[diff]++;
            store[diff]++;
        }
        sort(store,store+250);
        if(store[249]==store[248])
            cout<<"No jumping champion\n";
        else
        {
            for(ll y=0 ; y<250 ; y++)
            {
                if(counts[y]==store[249])
                {
                    cout<<"The jumping champion is "<<y<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}
