#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll ts=1 ; ts<=t ; ts++)
    {
        ll n;
        cin>>n;
        ll nn=n;
        while(n!=1 )
        {
            ll sum=0;
            while(n)
            {
                int temp;
                temp=n%10;
                n=n/10;
                sum+=temp*temp;
            }
            n=sum;
            if(n==nn || n==4)
                break;
        }
        cout<<"Case #"<<ts<<": "<<nn<<" is ";
        if(n==1)
            cout<<"a Happy number.\n";
        else
            cout<<"an Unhappy number.\n";
    }
    return 0;
}
