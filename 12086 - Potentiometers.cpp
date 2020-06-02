#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[200005],A_sum[200005],result[200005];
int main()
{
    ll n;
    int ts=1;
    while(cin>>n && n!=0)
    {
        A_sum[0]=0;
        for(int i=1 ; i<=n ; i++)
        {
            cin>>A[i];
            A_sum[i]=A[i];
            A_sum[i]+=A_sum[i-1];
        }
        string s;
        int cnt=1;
        while(cin>>s && s!="END")
        {
            ll a,b;
            cin>>a>>b;
            if(s=="S")
            {
                A_sum[a]=(A_sum[a]-A[a])+b;
                A[a]=b;
            }
            else if(s=="M")
            {
                result[cnt++]=A_sum[b]-A_sum[a-1];
            }
        }
        cout<<"Case "<<ts++<<": \n";
        for(int i=1 ; i<cnt ; i++)
        {
            cout<<result[i]<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
