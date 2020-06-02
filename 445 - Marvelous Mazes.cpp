#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[210];
    while(gets(s))
    {
        for(int i=0 ; i<strlen(s) ; i++)
        {
            int len=0;
            while(s[i]>='1' && s[i]<='9')
            {
                len+=s[i]-'0';
                i++;
            }
            while(len--)
            {
                if(s[i]=='b')
                    cout<<" ";
                else
                    cout<<s[i];
            }
            if(s[i]=='!')
                cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
