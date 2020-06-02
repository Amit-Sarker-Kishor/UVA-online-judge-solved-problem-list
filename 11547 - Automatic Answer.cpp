#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        n=(315*n)+36962;
        if(n<0)
            n*=-1;
        cout<<(n/10)%10;
        cout<<"\n";
    }
    return 0;
}
