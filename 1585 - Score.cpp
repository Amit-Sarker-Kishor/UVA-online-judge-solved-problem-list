#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        char ch[100];
        cin>>ch;
        int F_sum=0;
        for(int i=0 ; i<strlen(ch) ; i++)
        {
            int con=1,sum=0;
            while(ch[i]=='O')
            {
                sum+=con;
                con++;
                i++;
            }
            F_sum+=sum;
        }
        cout<<F_sum<<"\n";
    }
    return 0;
}
