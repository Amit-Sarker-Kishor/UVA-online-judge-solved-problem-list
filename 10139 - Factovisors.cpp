#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(m<=n)
        {
            cout<<m<<" divides "<<n<<"!\n";
            continue;
        }
        for(int i=2 ; i<=n && m>1 ; i++)
        {
            if(m%i==0)
                m/=i;
        }
        if(m==1)
            cout<<m<<" divides "<<n<<"!";
        else
            cout<<m<<" does not divide "<<n<<"!";
        cout<<"\n";
    }
    return 0;
}
