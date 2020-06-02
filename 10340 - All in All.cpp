#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char s[100000],w[100000];
    while(scanf("%s %s",s,w)!=EOF)
    {
        int ck,j=0;
        for(int i=0 ; s[i]!='\0' ; i++)
        {
            for( ; w[j]!='\0' ; j++)
            {
                if(s[i]==w[j])
                {
                    ck=1;
                    j++;
                    break;
                }
                else
                    ck=0;
            }
        }
        if(ck==0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}

