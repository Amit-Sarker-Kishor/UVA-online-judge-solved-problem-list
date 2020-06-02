#include<bits/stdc++.h>
using namespace std;
int P[2010],nP[2010],cnt=1;
void seive(void)
{
    nP[1]=1;
    P[0]=2;
    for(int i=3 ; i<=1000 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(int j=i+i ; j<=1000 ; j+=i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    seive();
    int n;
    while(cin>>n && n!=0)
    {
        int N=n,counts=0;
        for(int i=0 ; i<cnt && n>1 ; i++)
        {
            int ck=0;
            while(n%P[i]==0)
            {
                n/=P[i];
                ck=1;
            }
            if(ck)
                counts++;
        }
        if(n>1)
            counts+=1;
        cout<<N<<" : ";
        cout<<counts<<"\n";
    }
    return 0;
}
