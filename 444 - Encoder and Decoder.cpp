#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S[100];
    while(gets(S))
    {
        char ch[100];
        int sz=0;
        for(int i=0 ; i<strlen(S) ; i++)
        {
            if(S[i]>='0' && S[i]<='9')
                {
                    char c,temp;
                    if(S[i]=='1')
                    {
                        temp=(S[i]-'0')*100+(S[i+1]-'0')*10+(S[i+2]-'0');
                        c=temp;
                        i+=2;
                    }
                    else
                    {
                        temp=(S[i]-'0')*10+(S[i+1]-'0');
                        c=temp;
                        i+=1;
                    }
                    //cout<<c;
                    ch[sz++]=temp;
                }
                else
                {
                    if(S[i]>='d' && S[i]<='z')
                    {
                        int temp=S[i];
                        char c1,c2,c3;
                        c3=temp%10+'0';
                        temp/=10;
                        c2=temp%10+'0';
                        temp/=10;
                        c1=temp%10+'0';
                        temp/=10;
                        ch[sz]=c1;
                        ch[sz+1]=c2;
                        ch[sz+2]=c3;
                        i+=2;
                        sz+=2;
                    }
                    else
                    {
                        int temp=S[i];
                        cout<<temp<<endl;
                        char c1,c2;
                        c2=temp%10+'0';
                        temp/=10;
                        c1=temp%10+'0';
                        temp/=10;
                        ch[sz]=c1;
                        ch[sz+1]=c2;
                        i+=1;
                        sz+=1;
                    }
                }
        }
        for(int i=sz-1 ; i>=0 ; i--)
            cout<<ch[sz];
    }
}
