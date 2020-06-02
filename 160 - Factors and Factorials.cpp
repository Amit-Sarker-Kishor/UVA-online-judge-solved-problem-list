#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll P[110],notP[110],cnt;
void seive(ll n)
{
    notP[1]=1;
    P[0]=2;
    cnt=1;
    for(ll i=3 ; i<=n ; i+=2)
    {
        if(notP[i]==1)
            continue;
        for(ll j=i+i ; j<=n ; j+=i)
        {
            notP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        seive(n);
        ll A[110],c[110];
        memset(c,0,sizeof(c));
        for(ll i=0 ; i<=n ; i++)
        {
            A[i]=i;
        }
        for(ll i=0 ; i<cnt ; i++)
        {
            //cout<<P[i]<<" ";
            for(ll j=2 ; j<=n ; j++)
            {
                while(A[j]%P[i]==0)
                {
                    A[j]=A[j]/P[i];
                    c[P[i]]++;
                }
            }
        }
        printf("%3lld! =",n);
        ll cunt=0;
        for(ll i=0 ; i<cnt ; i++)
        {
            cunt++;
            if(cunt > 15)
                cunt -= 15, printf("\n      ");
            printf("%3lld",c[P[i]]);
        }
        cout<<"\n";
    }
    return 0;
}
