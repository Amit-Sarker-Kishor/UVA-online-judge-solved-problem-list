#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin,S);
    for(int i=0 ; i<S.size() ; i++)
    {
        if(S[i]=='k')
            S[i]='h';
        else if(S[i]=='[')
            S[i]='o';
        else if(S[i]=='r')
            S[i]='w';
        else if(S[i]=='d')
            S[i]='a';
        else if(S[i]=='y')
            S[i]='r';
        else if(S[i]=='t')
            S[i]='e';
        else if(S[i]=='I')
            S[i]='y';
        else if(S[i]=='o')
            S[i]='u';
    }
    cout<<S<<"\n";
    return 0;
}
