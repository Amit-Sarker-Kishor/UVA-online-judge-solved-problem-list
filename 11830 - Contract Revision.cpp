#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110],ch;
    while(cin>>ch>>s && ch!='0' && s!="0")
    {
        int start=0,is_digits=0;
        for(int i=0 ; i<strlen(s) ; i++)
        {
            if(s[i]!=ch && s[i]!='0')
                {
                    cout<<s[i];
                    start=1;
                    is_digits=1;
                    continue;
                }
            if(s[i]=='0' && start)
                cout<<s[i];

        }
        if(is_digits==0)
            cout<<0;
        cout<<"\n";
    }
    return 0;
}
