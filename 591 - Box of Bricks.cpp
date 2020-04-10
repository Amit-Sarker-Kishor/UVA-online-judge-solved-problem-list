#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t=1;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        ll A[100+5];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        ll sum=0,avg;
        for(ll i=0 ; i<n ; i++)
        {
            sum+=A[i];
        }
        avg=sum/n;
        sum=0;
        for(ll i=0 ; i<n ; i++)
        {
            if(A[i]>avg)
            {
              sum+=A[i]-avg;
            }
        }
        cout<<"Set #"<<t++<<"\nThe minimum number of moves is "<<sum<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
