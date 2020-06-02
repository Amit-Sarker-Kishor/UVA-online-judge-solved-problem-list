#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    //getchar();
    while(nn--)
    {
        int n,m;
        scanf("%d\n%d",&n,&m);
        for(int l=0 ; l<m ; l++)
        {
            for(int i=1 ; i<=n ; i++)
            {
                for(int j=1 ; j<=i ; j++)
                    {
                        cout<<i;
                    }
                cout<<endl;
            }
            for(int i=n-1 ; i>=1 ; i--)
            {
                for(int j=0 ; j<i ; j++)
                    {
                        cout<<i;
                    }
                    cout<<endl;
            }
            if(l!=m-1)
                cout<<endl;
        }
        if(nn)
            cout<<endl;
    }
}
