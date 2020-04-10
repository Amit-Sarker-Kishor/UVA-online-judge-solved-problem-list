#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    getchar();
    for(ll i=0 ; i<n ; i++)
    {
        char s[25],ss[25];
        gets(s);
        gets(ss);
        cout<<"Case "<<i+1<<":";
        if(strlen(s)==strlen(ss))
        {
            if(strcmp(s,ss)==0)
                cout<<" Yes\n";
            else
                cout<<" Wrong Answer\n";
        }
        else
        {
            char tmp[25];
            ll k=0;
            for(ll j=0 ; j<strlen(s) ; j++)
            {
                if(s[j]!=' ')
                    tmp[k++]=s[j];
                else
                    continue;
            }
            tmp[k]='\0';
            if(strcmp(tmp,ss)==0)
                cout<<" Output Format Error\n";
            else
                cout<<" Wrong Answer\n";
        }
    }
    return 0;
}
