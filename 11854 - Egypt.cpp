#include<bits/stdc++.h>
using namespace std;
#define i cin
#define o cout

int main()
{
    int a,b,c;
    while(i>>a>>b>>c)
    {
        if(a==0&& b==0 && c==0)
            return 0;
        while(a>b || b>c)
        {
            int temp;
            if(a>b)
            {
                temp=a;
            a=b;
            b=temp;
            }
            else
            {
                temp=b;
                b=c;
                c=temp;
            }
        }
        if((a*a)+(b*b)==(c*c))
            o<<"right\n";
        else
            o<<"wrong\n";
    }
}
