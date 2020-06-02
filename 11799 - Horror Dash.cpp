#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++)
    {
        int n,A[105],Max=0;
        cin>>n;
        for(int j=0 ; j<n ; j++)
        {
            cin>>A[j];
            if(A[j]>Max)
                Max=A[j];
        }
        cout<<"Case "<<i<<": "<<Max<<endl;
    }
    return 0;
}
