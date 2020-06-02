#include<bits/stdc++.h>
using namespace std;
long long ncr[1000][1000];
int main()
{
    ncr[0][0]=1;
    long long lim=100;
    for(int i=1 ; i<=lim ; i++)
    {
        for(int j=0 ; j<=lim ; j++)
        {
            if(j>i) ncr[i][j]=0;
            else if(j==i || j==0)   ncr[i][j]=1;
            else
                ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
        }
    }
    int i,j;
    while(cin>>i>>j)
    {
        if(i==0 && j==0)
            return 0;
        cout<<ncr[i][j]<<endl;
    }
}
