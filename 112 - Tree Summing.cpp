#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        char s[40000];
        ll top=0,i;
        for(i=0 ; ; i++)
        {
            cin>>s[i];
            if(s[i]=='(')
                top++;
            else if(s[i]==')')
                top--;
            if(top==0)
                break;
        }
        s[i+1]=0;
        ll A[10000],k=0;
        memset(A,0,sizeof(A));
        ll temp=0;
        for(ll j=1 ; j<strlen(s) ; j++)
        {
            ll ptemp=0;
            //if(s[j]!='(' && s[j]!=')')
                //temp+=s[j]-'0';
            while(s[j]>='0' && s[j]<='9')
            {
                temp+=s[j]-'0';
                if(s[j+1]>='0' && s[j+1]<='9')
                    {
                        temp*=10;
                        j++;
                    }
                else
                    break; //22 (5(4(11(7()())(2()()))()) (8(13()())(4()(1()()))))
            }
            if(s[j]=='(' && s[j-1]==')')
                {
                    A[++k]=temp+A[k-1];
                    temp=0;
                }
            else
                {
                    A[k]+=temp;
                    ptemp+=temp;
                    temp=0;
                }
        }
        int ck=0;
        for(ll j=0 ; j<=k ;j++)
        {
            cout<<A[j]<<" ";
            if(A[j]==n)
                ck=1;
        }
        if(ck)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
