#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n && n)
    {
        int a,b,ck=1;
        for(int i=1 ;  ; i++)
        {
            if((pow((i+1),3)-pow(i,3))>n)
            {
                ck=0;
                break;
            }
            ll findV=pow(i,3)+n;
            int j;
            for(j=i+1 ; pow(j,3)<=findV ; j++)
            {
            }
            if(pow(j-1,3)==findV)
            {
                a=j-1;
                b=i;
                break;
            }
        }
        if(ck)
            cout<<a<<" "<<b;
        else
            cout<<"No solution";
        cout<<"\n";
    }
    return 0;
}
