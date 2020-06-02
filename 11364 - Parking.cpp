#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,A[25];
        cin>>n;
        for(int i=1 ; i<=n ; i++)
        {
            cin>>A[i];
        }
        sort(A+1,A+n+1);
        int mid;
        if(n%2==0)
            mid=n/2;
        else
        {
            mid=n/2+1;
        }
        int walk=0;
        for(int i=1 ; i<mid ; i++)
        {
            walk+=(abs(A[i]-A[i+1])*2);
        }
        for(int i=mid ; i<n ; i++)
        {
            walk+=(abs(A[i]-A[i+1])*2);
        }
        cout<<walk;
        cout<<"\n";
    }
    return 0;
}
