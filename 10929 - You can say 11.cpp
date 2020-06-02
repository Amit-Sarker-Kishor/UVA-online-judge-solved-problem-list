#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void maino(void)
{
    char s[1001];
    while(scanf("%s", s) == 1)
    {
        if(strcmp(s, "0") == 0)
            break;
        int i, l = strlen(s), sum = 0;
        for(i = l-1; i >= 0; i -= 2)
            sum += s[i] - '0';
        for(i = l-2; i >= 0; i -= 2)
            sum -= s[i] - '0';
        printf("%s ", s);
        if(sum%11 == 0)
            puts("is a multiple of 11.");
        else
            puts("is not a multiple of 11.");
    }
}
int main()
{
    char ch[1001];
    while(cin>>ch)
    {
        if(strcmp(ch,"0")==0)
            break;
        int sum=0,len=strlen(ch);
        for(int i=len-1 ; i>=0 ; i-=2)
        {
            sum+=ch[i]-'0';
        }
        for(int i=len-2 ; i>=0 ; i-=2)
        {
            sum-=ch[i]-'0';
        }
        cout<<ch;
        if(sum%11==0)
        {
            cout<<" is a multiple of 11.\n";
        }
        else
            cout<<" is not a multiple of 11.\n";
    }
    return 0;
}


