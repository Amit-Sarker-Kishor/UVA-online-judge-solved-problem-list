#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,ts=1;
    while(cin>>r>>n && r && n)
    {
        int alpha;
        if(r<=n)
        {
            cout<<"Case "<<ts++<<": ";
            cout<<0<<"\n";
            continue;
        }
        int diff=r-n;
        if(diff%n==0)
            alpha=diff/n;
        else
            alpha=(diff/n)+1;
        cout<<"Case "<<ts++<<": ";
        if(alpha>26)
            cout<<"impossible";
        else
            cout<<alpha;
        cout<<"\n";
    }
    return 0;
}
