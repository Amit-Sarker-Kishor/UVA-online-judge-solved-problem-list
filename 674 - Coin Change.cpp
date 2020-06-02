// Using Recursive approch to slove
//Coin change problem
/*#include<iostream>
//#include<bits\stdc++.h>
#include<string.h>
#include<cstdio>
long long A[]={1,5,10,25,50};
long long dp[5][7490],value;
using namespace std;
long long change(long long i,long long cost)
{
    if(i>=5)
    {
        if(cost==value)
            return 1;
        else
            return 0;
    }
    if(dp[i][cost]>0)
        return dp[i][cost];
    long long ret1=0,ret2=0;
    if(cost+A[i]<=value)
        ret1=change(i,cost+A[i]);
    ret2=change(i+1,cost);
    return dp[i][cost]=ret1+ret2;
}
int main()
{
    while(cin>>value)
    {
        memset(dp, 0, sizeof dp);
        if(value==0)
            cout<<1<<endl;
        else
            cout<<change(0,0)<<endl;
    }
}      */
/***

            Welcome
            Read the name of Sree Krishna, who created us!!!
            Author : Amit Sarker Kishor
            Department of CSE, City University, Bangladesh.

***/
#include<iostream>
using namespace std;
#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pll pair <llu,llu>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
int main()
{
    int dp[7500]={},A[]={1,5,10,25,50};
    dp[0]=1;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=A[i] ; j<7500 ; j++)
        {
            dp[j]+=dp[j-A[i]];
        }
    }
    int n;
    while(cin>>n)
        cout<<dp[n]<<endl;
    return 0;
}
