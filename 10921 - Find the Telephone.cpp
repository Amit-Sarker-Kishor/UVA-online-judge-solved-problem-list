#include<iostream>
#include<cstdio>
using namespace std;
void sk()
{
    char ch='A';
    for(int i=65 ; i<=90 ; i++)
    {
        cout<<ch<<i<<" ";
        ch++;
    }
}
int main()
{
    int n;
    char ch[1000000];
    while(scanf("%s",ch)!=EOF)
    {
        for(int i=0 ; ch[i]!='\0' ; i++)
        {
            n=ch[i];
            if(n>64 && n<=67)
                cout<<"2";
            else if(n>67&&n<=70)
                cout<<"3";
            else if(n>70&&n<=73)
                cout<<"4";
            else if(n>73 && n<=76)
                cout<<"5";
            else if(n>76 && n<=79)
                cout<<"6";
            else if(n>79 && n<=83)
                cout<<"7";
            else if(n>83 && n<=86)
                cout<<"8";
            else if(n>86 && n<=90)
                cout<<"9";
            else if(n==48)
                cout<<"0";
            else if(n==49)
                cout<<"1";
            else
                cout<<"-";
        }
        cout<<endl;
    }
}
