#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(int ts=1 ; ts<=t ; ts++)
    {
        ll n;
        cin>>n;
        ll sum=0;
        sum=(n*(n-1))/2;

        cout<<"Case "<<ts<<": ";
        if(sum%2==0)
            cout<<sum/2<<"\n";
        else
            cout<<sum<<"/"<<2<<"\n";
    }
    return 0;
}
