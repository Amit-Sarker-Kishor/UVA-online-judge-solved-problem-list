#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=1 ; i<=t ; i++)
    {
        ll A,ck=1;
        for(ll j=0 ; j<13 ; j++)
        {
            cin>>A;
            if(A==0)
                ck=0;
        }
        if(ck)
            cout<<"Set #"<<i<<": Yes\n";
        else
            cout<<"Set #"<<i<<": No\n";
    }
    return 0;
}
