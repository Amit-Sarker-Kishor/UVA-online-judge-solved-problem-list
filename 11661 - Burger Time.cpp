#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l;
    string s;
    while(cin>>l)
    {
        if(l==0)
            return 0;
        ll mindis=l,lastR=-l,lastD=-l;
        cin>>s;
        for(ll i=0 ; i<l ; i++)
        {
            if(s[i]=='Z')
            {
                mindis=0;
                break;
            }
            else if(s[i]=='R')
            {
                mindis=min(mindis,i-lastD);
                lastR=i;
            }
            else if(s[i]=='D')
            {
                mindis=min(mindis,i-lastR);
                lastD=i;
            }
        }
        cout<<mindis<<endl;
    }
}
