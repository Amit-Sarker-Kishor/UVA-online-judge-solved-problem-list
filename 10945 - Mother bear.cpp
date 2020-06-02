#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[3000];
    while(gets(s))
    {
        char ch[3000],c[3000];
        if(strcmp(s,"DONE")==0)
            return 0;
        int len,j=0;
        for(int i=0 ; s[i]!='\0' ; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                if((s[i]>='A' && s[i]<='Z'))
                  ch[j++]=s[i]+32;
                else
                    ch[j++]=s[i];
            }
        }
        ch[j]='\0';
        strcpy(c,ch);
        j=0;
        for(int i=strlen(ch)-1 ; i>=0 ; i--)
        {
            ch[j++]=c[i];
        }
        ch[j]='\0';
        if(strcmp(c,ch)==0)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }
}
