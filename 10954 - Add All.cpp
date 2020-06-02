#include<bits\stdc++.h>
using namespace std;
int main()
{
    int A[5000],B[5000];
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        for(int i=0 ; i<n ; i++)
        {
            cout<<A[i]<<" ";
        }
        B[0]=A[0]+A[1];
        for(int j=1 ; j<n-1 ; j++)
        {
            B[j]=B[j-1]+A[j+1];
        }
        int sum=0;
        for(int j=0 ; j<n-1 ; j++)
        {
            sum+=B[j];
        }
        cout<<sum<<endl;
    }
}
