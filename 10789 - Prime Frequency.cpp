#include<bits/stdc++.h>
using namespace std;
int P[2010],nP[2010],cnt=1;
void seive(void)
{
    nP[1]=1;
    P[0]=2;
    for(int i=3 ; i<2001 ; i+=2)
    {
        if(nP[i]==1)
            continue;
        for(int j=i+i ; j<2001 ; j+=i)
        {
            nP[j]=1;
        }
        P[cnt++]=i;
    }
}
int main()
{
    seive();
    int t;
    cin>>t;
    getchar();
    for(int ts=1 ; ts<=t ; ts++)
    {
        char ch[2010];
        int A[150];
        cin>>ch;
        memset(A,0,sizeof(A));
        for(int i=0 ; i<strlen(ch) ; i++)
        {
            A[ch[i]]++;
        }
        int ck=1;
        cout<<"Case "<<ts<<": ";
        for(int i=45 ; i<124 ; i++)
        {
            if(A[i]>0)
            {
                for(int j=0 ; j<cnt ; j++)
                {
                    if(A[i]==P[j])
                    {
                        char c=i;
                        cout<<c;
                        A[i]=0;
                        ck=0;
                        break;
                    }
                }
            }
            else
                continue;
        }
        if(ck)
            cout<<"empty";
        cout<<"\n";
    }
    return 0;
}
