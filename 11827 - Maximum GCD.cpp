#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        char S[4000];
        ll A[105],dt=0;
        gets(S);
        for(ll i=0 ; i<strlen(S) ; i++)
        {
            ll temp=0;
            while(S[i]!=' ' && i<strlen(S))
            {
                temp+=S[i]-'0';
                if(S[i+1]!=' ' && i+1<strlen(S))
                    temp=temp*10;
                i++;
            }
            A[dt++]=temp;
        }
        ll mGCD=0;
        for(ll i=0 ; i<dt-1 ; i++)
        {
            for(ll j=i+1 ; j<dt ; j++)
            {
                ll temp;
                temp=gcd(A[i],A[j]);
                if(temp>mGCD)
                    mGCD=temp;
            }
        }
        cout<<mGCD<<endl;
    }
    return 0;
}
