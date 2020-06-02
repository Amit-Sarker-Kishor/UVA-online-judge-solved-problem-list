#include<bits/stdc++.h>
#define ll long long
#define sz 1000002
using namespace std;
int A[1000005];
int a[1000002];
void sieve(void)
{
    for(int i=2 ; i<=sz ; i++)
    {
        if(a[i]==0)
        {
            int n=i,sum=0;
            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            if(a[sum]==0)
                {
                    A[i]=1;
                }
            for(int j=2 ; i*j<=sz ; j++)
                {
                    a[i*j]=1;
                }
        }
    }
    for(int i=1 ; i<=sz ; i++)
        {
            A[i]=A[i]+A[i-1];
        }
}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        int l,u;
        cin>>l>>u;
        cout<<A[u]-A[l-1];
        cout<<"\n";
    }
    return 0;
}
