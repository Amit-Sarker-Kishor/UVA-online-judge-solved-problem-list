#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,cs=1;
    cin>>t;
    while(t--)
    {
        long long n,A[10+5];
        cin>>n;
        for(long long i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        long long j=(n/2);
        cout<<"Case "<<cs++<<": "<<A[j]<<endl;
    }
}
