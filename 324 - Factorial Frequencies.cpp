#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[1005],f_size;
ll zero_nine[10];
void multi(ll x)
{
    ll carry=0;
    for(ll i=0 ; i<f_size ; i++)
    {
        ll product=f[i]*x+carry;
        f[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        f[f_size]=carry%10;
        carry/=10;
        f_size++;
    }
}
void Fact(ll n)
{
    f[0]=1;
    f_size=1;
    for(ll x=2 ; x<=n ; x++)
    {
        multi(x);
    }
    memset(zero_nine,0,sizeof(zero_nine));
    for(ll i=f_size-1 ; i>=0 ; i--)
    {
        zero_nine[f[i]]++;
    }
}
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        Fact(n);
        cout<<n<<"! --\n   ";
        /*ll sp[10];
        for(ll i=0 ; i<10 ; i++)
            sp[i]=0;
        for(ll i=0 ; i<5 ; i++)
        {
            if(zero_nine[i]>99)
                sp[i+5]=2;
            else if(zero_nine[i]>9)
                sp[i+5]=1;
        }*/
        for(ll i=0 ; i<5 ; i++)
        {
            cout<<"("<<i<<") "<<zero_nine[i];
            if(i!=4)
                cout<<" ";
        }
        cout<<"\n   ";
        for(ll i=5 ; i<10 ; i++)
        {
            cout<<"("<<i<<") ";
            cout<<zero_nine[i];
            if(i!=9)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// 3! --
//    (0) 0 (1) 0 (2) 0 (3) 0 (4) 0
//    (5) 0 (6) 1 (7) 0 (8) 0 (9) 0
