#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[4000];
    while(cin>>ch)
    {
        for(int i=0 ; ch[i]!='\0' ; i++)
        {
            int k=ch[i]-7;
            char c=k;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
