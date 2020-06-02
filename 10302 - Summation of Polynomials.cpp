#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long sum=1;
        sum=(n*(n+1))/2*(n*(n+1)/2);
        //sum=sum*n*(n+1)/2;
        //sum=sum*n*(n+1)/2;
        cout<<sum<<endl;
    }
    return 0;
}
/*
#include<stdio.h>
int main()
{
    long double sum,i;
    int n;
    while(scanf("%d",&n) == 1)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum += i*i*i;
        }
        printf("%.0Lf\n",sum);
    }
    return 0;
}*/
