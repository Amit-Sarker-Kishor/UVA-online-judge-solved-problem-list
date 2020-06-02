#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[1001][301];
void mirror(void)
{
    A[0][0]=1;
    A[1][0]=2;
    for(ll i=2 ; i<=1000 ; i++)
    {
        for(ll j=0 ; j<300 ; j++)
        {
            A[i][j]=A[i-1][j]+A[i-2][j];
        }
        for(ll j=0 ; j<300 ; j++)
        {
            A[i][j+1]+=A[i][j]/10;
            A[i][j]=A[i][j]%10;
        }
    }
}
int main()
{
    mirror();
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        ll j=299;
        while(A[n][j]==0)
            j--;
        while(j>=0)
        {
            cout<<A[n][j];
            j--;
        }
        cout<<endl;
    }
}
