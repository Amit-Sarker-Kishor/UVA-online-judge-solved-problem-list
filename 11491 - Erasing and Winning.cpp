#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        //getchar();
        char S[100000];
        ll A[100000];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>S[i];
            A[i]=S[i]-'0';
        }
        sort(A,A+n);
        for(ll i=0 ; i<m ; i++ )
        {
            for(ll j=0 ; j<n ; j++)
            {
                if(S[j]-'0'==A[i])
                {
                    S[j]='*';
                    break;
                }
            }
        }
        for(ll i=0 ; i<n ; i++)
        {
            if(S[i]!='*')
                cout<<S[i];
        }
        cout<<endl;
    }
    return 0;
}
