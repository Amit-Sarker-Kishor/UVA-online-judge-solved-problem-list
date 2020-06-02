#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll result[100000],result_size;
void multiply(ll x)
{
    ll carry=0;
    for(ll i=0 ; i<result_size ; i++)
    {
        ll product=result[i]*x+carry;
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
void facto(ll n)
{
    result[0]=1;
    result_size=1;
    for(ll x=2 ; x<=n ; x++)
    {
        multiply(x);
    }
    for(ll i=result_size-1 ; i>=0 ; i--)
    {
        cout<<result[i];
    }
}
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<n<<"!\n";
        facto(n);
        cout<<endl;
    }
    return 0;
}
