#include<bits/stdc++.h>
using namespace std;
#define tcs(t) cin>>t;
#define cs(t) cout<<"Case "<<t<<": ";
int main()
{
    int t;
    tcs(t);
    for(int i=1 ; i<=t ; i++)
    {
        unsigned int a,b,c;
        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0)
        {
            cs(i);
            cout<<"Invalid\n";
        }
        else if(a+b>c && a+c>b && b+c>a)
        {
            if(a==b && b==c)
            {
                cs(i);
                cout<<"Equilateral\n";
            }
            else if(a==b || a==c || b==c)
            {
                cs(i);
                cout<<"Isosceles\n";
            }
            else
            {
                cs(i);
                cout<<"Scalene\n";
            }
        }
        else
        {
            cs(i);
            cout<<"Invalid\n";
        }
    }
}
