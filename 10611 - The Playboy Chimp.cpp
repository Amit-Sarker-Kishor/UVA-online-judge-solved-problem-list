#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[50005],B[25005];
    for(int i=0 ; i<n ; i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    int q;
    cin>>q;
    for(int i=0 ; i<q ; i++)
    {
        int l=0,r=n-1,x;
        cin>>x;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(x<A[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        while(A[r]==x)
            r--;
        if(r>=0)
            cout<<A[r];
        else
            cout<<"X";
        cout<<" ";
        if(l<n)
            cout<<A[l];
        else
            cout<<"X";
        cout<<"\n";
    }
    return 0;
}
