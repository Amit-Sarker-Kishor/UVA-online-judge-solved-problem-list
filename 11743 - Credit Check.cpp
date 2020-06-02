#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        int sum1=0,sum2=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]==' ')
                continue;
            if(i==0 || i==2 || i==5 || i==7 || i==10 || i==12 || i==15 || i==17)
            {
                int tm=(s[i]-'0')*2;
                while(tm)
                {
                    sum1+=tm%10;
                    tm/=10;
                }
            }
            else
            {
                int tm=s[i]-'0';
                while(tm)
                {
                    sum2+=tm%10;
                    tm/=10;
                }
            }
        }
        if((sum1+sum2)%10==0)
            cout<<"Valid";
        else
            cout<<"Invalid";
        cout<<"\n";
    }
    return 0;
}
