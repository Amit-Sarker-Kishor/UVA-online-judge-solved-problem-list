#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[220],c[220];
        cin>>s;
        cin>>c;
        int fst,scnd;
        fst=s[strlen(s)-1]-'0';
        for(int i=strlen(s)-1 ; i>0 ; i--)
        {
            fst=fst*10+(s[i-1]-'0');
        }
        scnd=c[strlen(c)-1]-'0';
        for(int i=strlen(c)-1 ; i>0 ; i--)
        {
            scnd=scnd*10+(c[i-1]-'0');
        }
        int finl;
        finl=fst+scnd;
        while(finl%10==0)
            finl/=10;
        while(finl)
        {
            cout<<finl%10;
            finl/=10;
        }
        cout<<"\n";
    }
    return 0;
}

