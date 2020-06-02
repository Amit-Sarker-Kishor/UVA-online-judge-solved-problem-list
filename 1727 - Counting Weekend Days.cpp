#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        char mnth[3],day[3];
        scanf("%s",mnth);
        getchar();
        scanf("%s",day);
        cout<<mnth<<day;
    }
}
