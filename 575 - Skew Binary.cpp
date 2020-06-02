#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char s[4000];
    while(gets(s))
    {
        if(strcmp(s,"0")==0)
            return 0;
        ll len=strlen(s);
        ll sum=0,p=len;
        for(ll i=0 ; i<len ; i++)
        {
            ll nm=s[i]-'0',t=1;
            for(ll j=1 ; j<=p ; j++)
                t*=2;
            sum+=nm*(t-1);
            p--;
        }
        cout<<sum<<endl;
    }
}
