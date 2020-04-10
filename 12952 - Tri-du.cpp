#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        if(n==m)
            cout<<n<<endl;
        else if(n>m)
            cout<<n<<endl;
        else
            cout<<m<<endl;
    }
    return 0;
}
