#include<iostream>
using namespace std;
int main()
{
    long long m,n;
    long long sum,ck,rem,ren,cko=0;
    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        ck=cko=0;
        while(m || n)
        {
            rem=m%10;
            ren=n%10;
            m=m/10;
            n=n/10;
            sum=rem+ren+cko;
            if(sum>=10)
            {
                ck++;
                cko=1;
            }
            else
                cko=0;
        }
        if(ck==0)
            cout<<"No carry operation.\n";
        else if(ck==1)
            cout<<"1 carry operation.\n";
        else
            cout<<ck<<" carry operations.\n";
    }
}
