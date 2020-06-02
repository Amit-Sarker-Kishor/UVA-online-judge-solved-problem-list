#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='\\' || s[i]=='"')
            cout<<"\\";
        cout<<s[i];
    }
}
int main()
{
    /*ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);*/
    int n,ts=1;
    while(cin>>n && n)
    {
        getchar();
        cout<<"Case "<<ts++<<":\n";
        cout<<"#include<string.h>\n";
        cout<<"#include<stdio.h>\n";
        cout<<"int main()\n{\n";
        for(int i=0 ; i<n ; i++)
        {
            string s;
            getline(cin,s);
            cout<<"printf(\"";
            print(s);
            cout<<"\\n\");\n";
        }
        cout<<"printf(\"\\n\");\n";
        cout<<"return 0;\n";
        cout<<"}\n";
    }
    return 0;
}
