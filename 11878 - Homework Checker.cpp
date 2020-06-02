#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    while(cin>>s)
    {
        int a=0,b=0,c=0,i;
        for(i=0 ; s[i]!='+' && s[i]!='-' ; i++)
        {
            a+=s[i]-'0';
            if(s[i+1]!='+' && s[i+1]!='-')
                a=a*10;
        }
        char ch=s[i++];
        for( ; s[i]!='=' ; i++)
        {
            b+=s[i]-'0';
            if(s[i+1]!='=')
                b=b*10;
        }
        i++;
        if(s[i]=='?')
            continue;
        for( ; i<s.size() ; i++)
        {
            c+=s[i]-'0';
            if(i+1!=s.size())
                c=c*10;
        }
        int value;
        if(ch=='+')
            value=a+b;
        else
            value=a-b;
        if(value==c)
            cnt++;
    }
    cout<<cnt;
    cout<<"\n";
    return 0;
}
