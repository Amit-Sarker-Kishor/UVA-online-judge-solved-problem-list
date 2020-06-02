#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        long long sum=0;
        while(n>=3)
        {
            sum+=n/3;
            n=n/3+n%3;
        }
        if(n==2)
            sum++;
        cout<<sum<<endl;
    }
}
