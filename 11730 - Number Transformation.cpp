#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    while(cin>>s>>t && s && t)
    {
        int P[105],cnt=0;
        for(int i=2 ; i<s ; i++)
        {
            int ck=1;
            for(int j=2 ; j<i ; j++)
            {
                if(i%j==0)
                    ck=0;
            }
            if(ck && s%i==0)
                P[cnt++]=i;
        }

        if(t<s || cnt==0)
            cout<<-1;
        else
        {
            t=t-s,mn=105;
            for(int i=0 ; i<cnt ; i++)
            {
                if(t%P[i]==0)
                {
                    if(t/P[i]<mn)
                        mn=t/P[i];
                }
            }
            int sum=0;
            for(int i=0 ; i<cnt ; i++)
            {
                sum+=max(P[i],sum+P[i]);

            }
        }

    }
}
