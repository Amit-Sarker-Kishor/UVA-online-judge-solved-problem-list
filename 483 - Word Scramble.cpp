#include<bits/stdc++.h>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    char S[3500];
    while(gets(S))
    {
        int s=-1,e=-1;
        for(int i=0 ; S[i]!='\0' ; i++)
        {
            if(S[i]!=' ')
            {
                s=i;e=i;
                while(S[e]!=' ' && S[e]!='\0')
                    e++;
                for(int j=e-1 ; j>=s ; j--)
                    cout<<S[j];
                i=e-1;
            }
            else
            {
                cout<<S[i];
            }

        }
        cout<<endl;
    }
    return 0;
}
