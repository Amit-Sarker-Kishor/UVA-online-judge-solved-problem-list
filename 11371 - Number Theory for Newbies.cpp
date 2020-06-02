#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        long long n=0,m=0;
        for(int i=0 ; i<s.size()-1 ; i++)
        {
            n+=s[i]-'0';
            n*=10;
        }
        n+=s[s.size()-1]-'0';
        sort(s.begin(),s.end());
        for(int i=s.size()-1 ; i>0 ; i--)
        {
            m+=s[i]-'0';
            m*=10;
        }
        m+=s[0]-'0';
        cout<<m;
        int i;
        for(i=n ; ((i*9)+n)>m ; i--)
        {

        }
        cout<<
    }
}
