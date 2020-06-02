#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,cs=1;
    while(cin>>t)
    {
        if(t==0)
            return 0;
        double a,b,c;
        cin>>a>>b>>c;
        cout<<"Case "<<cs++<<": ";
        switch(t)
        {
            case 1:
                {
                    double s,ac;
                    ac=(b-a)/c;
                    s=a*c+(.5*ac*c*c);
                    cout<<setprecision(3)<<fixed<<s<<" "<<ac<<endl;
                    break;
                }
            case 2:
                {
                    double s,t,ac=c;
                    t=(b-a)/ac;
                    s=a*t+(.5*ac*t*t);
                    cout<<setprecision(3)<<fixed<<s<<" "<<t<<endl;
                    break;
                }
            case 3:
                {
                    double s=c,t,ac=b,v=1,u=a;
                    v=sqrt((u*u)+(2*ac*s));
                    t=(v-u)/ac;
                    cout<<setprecision(3)<<fixed<<v<<" "<<t<<endl;
                    break;
                }
            case 4:
                {
                    double s=c,t,ac=b,v=a,u;
                    u=sqrt((v*v)-(2*ac*s));
                    t=(v-u)/ac;
                    cout<<setprecision(3)<<fixed<<u<<" "<<t<<endl;
                    break;
                }
        }
    }
}
