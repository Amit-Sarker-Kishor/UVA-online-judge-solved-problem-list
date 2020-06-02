#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ts=1 ; ts<=t ; ts++)
    {
        int k;
        cin>>k;
        int h,m;
        char c;
        scanf("%d%c%d",&h,&c,&m);
        int mnm=1000000007;
        int time=h*60+m;
        for(int i=0 ; i<k ; i++)
        {
            int hh,mm,home;
            char cc;
            scanf("%d%c%d",&hh,&cc,&mm);
            cin>>home;
            int value;
            value=hh*60+mm;
            if(time>value)
                value+=1440;
            value+=home;
            if(mnm>value)
                mnm=value;
        }
        cout<<"Case "<<ts<<": ";
        cout<<mnm-time;
        cout<<"\n";
    }
    return 0;
}
