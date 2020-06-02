#include<iostream>
long long ar1[100000000],ar2[100000000];
long long m,n;
using namespace std;
int main()
{
    long long cnt,x;
    while(cin>>m>>n)
    {
        cnt=0;
        if(m==0 && n==0)
            return 0;
        for(int i=0 ; i<m ; i++)
        {
            cin>>ar1[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            cin>>ar2[i];
        }
        int i,j;
        i = j = 0;
        while (i<=m && j<=n)
        {
            while (j<=n && ar2[j]<ar1[i]) j++;
            if (j>n) break;
            if (ar1[i]==ar2[j])
            {
                cnt++;
                j++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}
