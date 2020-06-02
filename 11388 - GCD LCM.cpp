#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,l;
        cin>>g>>l;
        if(l%g)
            cout<<"-1";
        else
            cout<<g<<" "<<l;
        cout<<"\n";
    }
    return 0;
}
