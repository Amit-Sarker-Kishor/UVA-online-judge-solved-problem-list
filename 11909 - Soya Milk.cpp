#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
//#define redian(x) (double degree/360.0)*2*pi
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    double l,h,w,theta;
    while(cin>>l>>w>>h>>theta)
    {
        double x=(theta/360.0)*2*pi;
        if(l*tan(x)<=h)
        {
            double ans;
            cout<<setprecision(3)<<fixed<<l*w*h-(w*0.5*l*l*tan(x));
        }
        else
        {
            double ans;
            cout<<setprecision(3)<<fixed<<(w*0.5*h*h*1/tan(x));
        }
        cout<<" mL\n";
    }
    return 0;
}
