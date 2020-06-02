#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=1 ; tt<=t ; tt++)
    {
        double n,sum=0;
        for(int i=0 ; i<12 ; i++)
        {
            cin>>n;
            sum+=n;
        }
        double avg,bk;
        int a,b,c;
        avg=sum/12;
        c=avg;
        bk=avg-c;
        a=avg/1000;
        b=(int)avg%1000;
        bk=b+bk;
        cout<<tt<<" $";
        if(a>0)
            cout<<a<<","<<setprecision(2)<<fixed<<bk;
        else
            cout<<setprecision(2)<<fixed<<avg;
        cout<<"\n";
    }
    return 0;
}
