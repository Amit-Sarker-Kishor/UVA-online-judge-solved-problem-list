#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        ll temp=max(n,m);
        m=min(n,m);
        n=temp;
        ll A[100],B[100];
        int size_A=0,size_B=0;
        while(n)
        {
            A[size_A++]=n%2;
            n=n/2;
        }
        while(m)
        {
            B[size_B++]=m%2;
            m/=2;
        }
        ll C[100],size_C=0;
        ll i,carry=0;
        for(i=0 ; i<size_B ; i++)
        {
            //C[size_C++]=A[i]+B[i]>1?0:A[i]+B[i];
            if(A[i]+B[i]==2)
            {
                C[size_C++]=0;
                //carry=1;
            }
            /*else if(A[i]+B[i]+carry==3)
            {
                C[size_C++]=1;
                carry=1;
            }*/
            else
            {
                C[size_C++]=A[i]+B[i];
                //carry=0;
            }
        }
        for(i=size_B ; i<size_A ; i++)
        {
            /*if(A[i]+carry==2)
            {
                C[size_C++]=0;
            }*/

                C[size_C++]=A[i];
                //carry=0;

        }
        /*if(carry)
            C[size_C++]=carry;*/
        ll sum=0;
        for(ll i=0 ; i<size_C ; i++)
            {
                sum+=pow(2,i)*C[i];
            }
            cout<<sum;
        cout<<endl;
        /*for(ll i=size_B-1 ; i>=0 ; i--)
            cout<<B[i];*/
    }
    return 0;
}
