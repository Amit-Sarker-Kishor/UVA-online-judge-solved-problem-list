#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long num;
        num=(sqrt(1+4*2*n)-1)/2;
        cout<<num<<endl;
    }
    return 0;
}
