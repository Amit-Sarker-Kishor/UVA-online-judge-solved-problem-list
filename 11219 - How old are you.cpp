#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    getchar();
    int kes=1;
    while(t--)
    {
        char s[10+5];
        gets(s);
        int d,m,y;
        d=(s[0]-'0')*10+(s[1]-'0');
        m=(s[3]-'0')*10+s[4]-'0';
        y=(s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+s[9]-'0';
        cout<<y<<endl;
        gets(s);
        int d1,m1,y1;
        d1=(s[0]-'0')*10+(s[1]-'0');
        m1=(s[3]-'0')*10+s[4]-'0';
        y1=(s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+s[9]-'0';
        cout<<y<<y1<<endl;
    }
}
