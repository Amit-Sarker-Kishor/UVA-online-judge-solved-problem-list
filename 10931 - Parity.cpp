#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l;
    while(cin>>l)
    {
        if(l==0)
            return 0;
        long long A[2000],n=0,sum=0;
        while(l>0)
        {
            A[n]=l%2;
            l/=2;
            n++;
        }
        for(int i=0 ; i<n ; i++)
        {
            sum+=A[i];
        }
        cout<<"The parity of ";
        for(int i=n-1 ; i>=0 ; i--)
        {
            cout<<A[i];
        }
        cout<<" is "<<sum<<" (mod 2).\n";
    }
}
