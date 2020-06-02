#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000010];
    int n,i=1;
    while (scanf("%s %d", s, &n) == 2)
    {
        cout<<"Case "<<i++<<":\n";
        for(int c=0 ; c<n ; c++)
        {
            int u,v,p,q,counts=0;
            cin>>u>>v;
            p=u;
            q=v;
            u=max(p,q);
            v=min(p,q);
            for(int i=v ; i<=u ; i++)
            {
                counts+=s[i]-'0';
            }
            if(counts==u-v+1 || counts==0)
                cout<<"Yes";
            else
                cout<<"No";
            cout<<"\n";
        }
    }
    return 0;
}

