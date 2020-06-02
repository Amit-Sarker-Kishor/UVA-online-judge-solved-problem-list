#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        int len,n;
        len=s.size();
        n=sqrt(len);
        if(n*n==len)
            {
               int k=0;
               char ch[105][105];
               for(int i=0 ; i<n ; i++)
                    for(int j=0 ; j<n ; j++)
                        ch[i][j]=s[k++];
               for(int i=0 ; i<n ; i++)
                    for(int j=0 ; j<n ; j++)
                        cout<<ch[j][i];
            }
        else
            cout<<"INVALID";
        cout<<"\n";
    }
    return 0;
}
