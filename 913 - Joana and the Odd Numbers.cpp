#include<iostream>
using namespace std;
int main()
{
    long long n,j=0,temp=1;
    while(cin>>n)
    {
        long long nth=0;
        for(long long i=1 ; i<=n ; i+=2)
        {
            nth+=i;
        }
        cout<<1+(nth-1)*2+1+(nth-2)*2+1+(nth-3)*2<<endl;
    }
    return 0;
}
