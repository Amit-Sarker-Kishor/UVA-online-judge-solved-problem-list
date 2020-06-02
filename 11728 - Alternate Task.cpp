#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int s,ts=1;
    while(cin>>s && s)
    {
        int mx=0,ck=0;
        for(int i=1 ; i<=s ; i++)
        {
            int sum=0;
            for(int j=1 ; j<=i ; j++)
            {
                if(i%j==0)
                {
                    sum+=j;
                }
            }
            if(sum==s && i>mx)
            {
                mx=i;
                ck=1;
            }
        }
        cout<<"Case "<<ts++<<": ";
        if(ck)
            cout<<mx;
        else
            cout<<-1;
        cout<<"\n";
    }
    return 0;
}
