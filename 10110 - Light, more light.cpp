#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        ll sw;
        sw=sqrt(n);
            if(sw*sw==n)
                cout<<"yes\n";
            else
                cout<<"no\n";
    }
}
