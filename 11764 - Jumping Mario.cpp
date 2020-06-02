#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++)
    {
        int n,A[60];
        cin>>n;
        for(int j=0 ; j<n ; j++)
        {
            cin>>A[j];
        }
        int hi=0,lw=0;
        for(int j=0 ; j<n-1 ; j++)
        {
            if(A[j]-A[j+1]>0)
                lw++;
            if(A[j]-A[j+1]<0)
                hi++;
        }
        cout<<"Case "<<i<<": "<<hi<<" "<<lw<<endl;
    }
    return 0;
}
