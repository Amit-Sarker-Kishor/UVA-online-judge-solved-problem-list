#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    char ch[110];
    memset(ch,'0',sizeof(ch));
    ll j=0,crry=0;
    while(cin>>s && s[0]!='0')
    {
        ll st=s.size();
        j=max(j,st);
        ll carry=0;
        for(ll i=s.size()-1 ; i>=0 ; i--)
        {
            ll temp;
            temp=ch[i]-'0'+s[i]-'0' +carry;
            ch[i]=temp%10+'0';
            carry=temp/10;
        }
        crry+=carry;
    }
    if(crry>0)
    {
        cout<<crry;
        for(ll i=0 ; i<j ; i++)
            cout<<ch[i];
    }
    else
        for(ll i=0 ; i<j ; i++)
            cout<<ch[i];
    cout<<"\n";
    return 0;
}
