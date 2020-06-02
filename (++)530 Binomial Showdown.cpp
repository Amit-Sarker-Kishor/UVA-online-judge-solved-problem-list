#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r;
    while(cin>>n>>r)
    {
        if(n==0 && r==0)
            return 0;
        long long A[3000],B[3000],p=n-r;
        if(p<r)
        {
            long long temp;
            temp=p;
            p=r;
            r=temp;
        }
        for(long long i=0 ; i<n-p ; i++)
        {
            A[i]=(p+i+1);
        }
        for(long long i=0 ; i<r ; i++)
        {
            B[i]=i+1;
        }
        long long temp=1;
        for(int i=0 ; i<n-p ; i++)
        {
            temp*=A[i];
            for(int j=0 ; j<r ; j++)
            {
                if(temp%B[j]==0)
                    {
                        temp/=B[j];
                        B[j]=1;
                    }
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
