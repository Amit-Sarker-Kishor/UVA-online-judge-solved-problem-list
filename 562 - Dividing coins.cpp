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
int dp[200];
long long A[50000];
long long Max(long long m,long long n)
{
    if(m>n)
        return m;
    else
        return n;
}
int knapsack(int n,int S)
{
    for(int i=0 ; i<=S ; i++)
        A[i]=0;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=S ; j>0 ; j--)
        {
            if(dp[i]<=j)
                A[j]=Max(A[j],(dp[i]+A[j-dp[i]])); //A[j]=Max(dp[i],(A[j]+A[j-dp[i]]));  //A[j]=Max(A[j],(dp[i]+A[j-dp[i]]));
        }
    }
    return A[S];
}
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int tt=0;
        for(int i=1 ; i<=m ; i++)
        {
            cin>>dp[i];
            tt+=dp[i];
        }
        cout<<tt-2*knapsack(m,tt/2)<<endl;
    }
    return 0;
}
