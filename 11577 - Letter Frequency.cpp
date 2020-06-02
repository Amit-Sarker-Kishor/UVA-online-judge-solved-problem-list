#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        int freq[150]={0},mx=0;
        getline(cin,s);
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=' ';
            if(s[i]>='a' && s[i]<='z')
            {
                freq[s[i]]++;
                if(freq[s[i]]>mx)
                    mx=freq[s[i]];
            }
        }
        for(int i=95 ; i<125 ; i++)
            if(freq[i]==mx)
                {
                    char ch=i;
                    cout<<ch;
                }
        cout<<"\n";
    }
    return 0;
}
