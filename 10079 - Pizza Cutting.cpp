/*#include<iostream>
unsigned long long A[210000000];
using namespace std;
unsigned long long pizza(unsigned long long n)
{
    if(n==1)
        return 2;
    if(A[n]>0)
        return A[n];
    return A[n]=pizza(n-1)+n;
}
int main()
{
    unsigned long long n;
    while(cin>>n)
        cout<<pizza(n)<<endl;
}*///Try to solve using recursion
#include<iostream>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n<0)
            break;
        cout<<((n*(n+1)/2)+1)<<endl;
    }
}
