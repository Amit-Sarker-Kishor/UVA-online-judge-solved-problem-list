#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll result[22000],result_size;
void multi(ll n)
{
    ll carry=0;
    for(ll i=0 ; i<result_size ; i++)
    {
        ll product=result[i]*n+carry;
        result[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        result[result_size]=carry%10;
        carry=carry/10;
        result_size++;
    }
}
void facto(ll x)
{
    result_size=1;
    result[0]=1;
    for(ll i=2 ; i<=x ; i++)
    {
        multi(i);
    }
    ll sum=0;
    for(ll i=result_size-1 ; i>=0 ; i--)
    {
        sum+=result[i];
    }
    cout<<sum;
}
int main()
{
    ll n;
    while(scanf("%lld",&n)==1)
    {
        facto(n);
        cout<<endl;
    }
    return 0;
}
