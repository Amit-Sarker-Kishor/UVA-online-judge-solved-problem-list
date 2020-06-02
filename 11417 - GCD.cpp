#include<bits/stdc++.h>
using namespace std;
int gcd(long long a,long long b)
{
    while(b!=0)
    {
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        long long gcdsum=0;
        for(int i=1 ; i<n ; i++)
        {
            for(int j=i+1 ; j<=n ; j++)
            {
                gcdsum+=gcd(i,j);
            }
        }
        cout<<gcdsum<<endl;
    }
}
