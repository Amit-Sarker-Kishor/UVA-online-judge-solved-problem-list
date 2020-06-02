#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        //getchar();
        char S[100005];
        ll A[100005],F[100005],freq[15];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>S[i];
            A[i]=S[i]-'0';
        }
        /*sort(A,A+n);
        memset(freq,0,sizeof(freq));
        for(ll i=0 ; i<m ; i++)
        {
            freq[A[i]]++;
        }
        for(ll j=0 ; j<n ; j++)
        {
            if(freq[S[j]-'0']>0)
            {
                freq[S[j]-'0']--;
                S[j]='*';
            }
        }
        for(ll i=0 ; i<n ; i++)
        {
            if(S[i]!='*')
                cout<<S[i];
        }*/
        int id=0,cnt=1;
        for(ll i=0 ; i<n ; i++)
        {
            while(id>0 && F[id]<A[i] && cnt<=m)
            {
                id--;
                cnt++;
            }
            F[id+1]=A[i];
            id++;
        }
        for(ll i=1 ; i<=n-m ; i++)
            cout<<F[i];
        cout<<endl;
    }
    return 0;
}
