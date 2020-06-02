#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[30000000],ckP[30000000];
ll A[200005][2];
int main()
{
    ckP[1]=1;
    ll cnt=1;
    P[0]=2;
    for(ll i=3 ; i<20000000 ; i+=2)
    {
        if(ckP[i]==1)
            continue;
        for(ll j=i+i ; j<20000000 ; j+=i)
            ckP[j]=1;
        P[cnt++]=i;
    }
    int cntt = cnt;
    cnt = 1;
    for(ll i=1 ; i<cntt ; i++)
    {
        if(P[i]-P[i-1]==2)
        {
            A[cnt][0]=P[i-1];
            A[cnt][1]=P[i];
            cnt++;
        }
    }
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<"("<<A[n][0]<<", "<<A[n][1]<<")"<<endl;
    }
    return 0;
}
