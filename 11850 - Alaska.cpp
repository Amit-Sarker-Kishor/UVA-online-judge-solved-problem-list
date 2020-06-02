#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,A[1500];
    while(cin>>n && n)
    {
        int ok=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>A[i];
            if(A[i]>=1322)
                ok=1;
        }
        sort(A,A+n);
        //A[n++]=1422;
        int ck=1;
        for(int i=n-1 ; i>=1 ; i--)
        {
            if(A[i]-A[i-1]>200)
                ck=0;
        }
        if(ck && ok)
            cout<<"POSSIBLE";
        else
            cout<<"IMPOSSIBLE";
        cout<<"\n";
    }
    return 0;
}
