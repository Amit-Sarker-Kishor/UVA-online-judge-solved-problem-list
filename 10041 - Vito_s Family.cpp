#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,A[1000],sum=0;
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);            //tD+=(avg-A[i]>0)?(avg-A[i]):(A[i]-avg);
        int mid=A[n/2];
        for(int i=0 ; i<n ; i++)
        {
            sum+=abs(A[i]-mid);
        }
        cout<<sum<<endl;
    }
    return 0;
}
