#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long m,n,di;
    while(scanf("%lld %lld",&m,&n)!=EOF)
    {
        di=abs(n-m);
        cout<<di<<endl;
    }
}
