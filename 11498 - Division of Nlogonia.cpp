#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    char n='\\';
    cout<<n;
    while(cin>>k && k)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0 ; i<k ; i++)
        {
            int a,b;
            cin>>a>>b;
            if(a>n && b>m)
            {
                cout<<"NE";
            }
            else if(a>n && b<m)
            {
                cout<<"SE";
            }
            else if(a<n && b<m)
            {
                cout<<"SO";
            }
            else if(a<n && b>m)
            {
                cout<<"NO";
            }
            else
                cout<<"divisa";
            cout<<"\n";
        }
    }
    return 0;
}
