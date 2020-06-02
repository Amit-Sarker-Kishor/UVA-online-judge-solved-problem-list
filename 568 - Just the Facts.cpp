#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll F[9999999],F_size;
void multi(ll x)
{
    ll carry=0;
    for(ll i=0 ; i<F_size ; i++)
    {
        ll product=F[i]*x+carry;
        F[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        F[F_size]=carry%10;
        carry/=10;
        F_size++;
    }
}
void factorial(ll n)
{
    F[0]=1;
    F_size=1;
    for(ll x=2 ; x<=n ; x++)
        multi(x);
    for(ll i=0 ; i<=n/2 ; i++)
        if(F[i]!=0)
            {
                cout<<F[i];
                break;
            }
    cout<<endl;
}
int main()
{
    ll n;
    while(scanf("%lld",&n)==1)
    {
        printf("%5d",n);
        cout<<" -> ";
        factorial(n);
    }
    return 0;
}
