#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[17005],nP[17005],cnt;
void seive(void)
{
    P[0]=2;
    nP[1]=1;
    for(ll i=3 ; i<=17000 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(ll j=i+i ; j<=17000 ; j=j+i)
            nP[j]=1;
        P[cnt++]=i;
    }
}
int main()
{
    seive();
    ll n;
    while(cin>>n && n!=0)
    {
        ll i=0,pri=0;
        while(n-P[i]>=P[i])
        {
            for(ll j=i ; j<cnt ; j++)
            {
                if(n-P[i]==P[j])
                    pri++;
            }
            i++;
        }
        cout<<pri<<"\n";
    }
}
