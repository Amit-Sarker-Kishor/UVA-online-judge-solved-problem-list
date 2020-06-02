#include<iostream>
#include<cstring>
using namespace std;
int digit(int n)
{
    if(n<10)
        return n;
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return digit(sum);
}
int main()
{
    long long n,sum;
    while(cin>>n)
    {
        if(n==0)
            break;
        sum=digit(n);
        cout<<sum<<endl;
    }
}
