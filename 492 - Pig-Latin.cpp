#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s) && s.size()!=0)
    {
        //cout<<s;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                while(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' && i<s.size())
                    cout<<s[i++];
                cout<<"ay";
            }
            else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                char ch=s[i];
                i=i+1;
                while(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' && i<s.size())
                    cout<<s[i++];
                cout<<ch<<"ay";
            }
            cout<<s[i];
            /*if(i!=s.size()-1 && s[i]!='.')
                cout<<" ";
            if(s[i]=='.')
                cout<<".";*/
        }
        cout<<"\n";
    }
    return 0;
}
