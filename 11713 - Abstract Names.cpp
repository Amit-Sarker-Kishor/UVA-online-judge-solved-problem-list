#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s,ss;
        cin>>s>>ss;
        int A[25]={-1},cnt=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                A[i]=i;
        }
        if(s.size()==ss.size())
        {
            int ck=1;
            for(int i=0 ; i<ss.size() ; i++)
            {
                if(A[i]==i)
                {
                    if(ss[i]!='a' && ss[i]!='e' && ss[i]!='i' && ss[i]!='o' && ss[i]!='u')
                    {
                        ck=0;
                    }
                }
                else
                {
                    if(s[i]!=ss[i])
                        ck=0;
                }
            }
            if(ck)
                cout<<"Yes";
            else
                cout<<"No";
        }
        else
            cout<<"No";
        cout<<"\n";
    }
    return 0;
}
