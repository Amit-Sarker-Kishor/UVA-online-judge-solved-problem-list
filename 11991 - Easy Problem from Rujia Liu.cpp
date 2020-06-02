#include<bits/stdc++.h>
using namespace std;
#define mx 100000
vector< int > vc[1000005];
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=0 ; i<n ; i++)
        {
            int x;
            cin>>x;
            vc[x].push_back(i+1);
        }
        for(int i=0 ; i<m ; i++)
        {
            int a,b;
            cin>>a>>b;
            if(a-1<vc[b].size())
                cout<<vc[b][a-1];
            else
                cout<<0;
            cout<<"\n";
        }
    }
    return 0;
}
