#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[10010][1010];
void f(void)
{
    A[1][0]=1;
    A[2][0]=1;
    for(ll i=3 ; i<=10000 ; i++)
    {
        for(ll j=0 ; j<1005 ; j++)
        {
            A[i][j]=A[i-1][j]+A[i-2][j];
        }
        for(ll j=0 ; j<1005 ; j++)
        {
            A[i][j+1]+=A[i][j]/10;
            A[i][j]=A[i][j]%10;
        }
    }
}
int main()
{
    f();
    ll n;
    while(scanf("%lld",&n)==1)
    {
        ll i,j=1005;
        i=n;
        while(A[i][j]==0)
            j--;
        while(j>=0)
            cout<<A[i][j],j--;
        cout<<"\n";
    }
    return 0;
}
