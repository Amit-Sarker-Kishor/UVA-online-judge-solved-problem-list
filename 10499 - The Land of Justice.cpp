#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n && n>=0)
    {
        if(n==1)
            cout<<"0%\n";
        else
            cout<<n*25<<"%\n";
    }
    return 0;
}
