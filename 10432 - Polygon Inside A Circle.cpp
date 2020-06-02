#include<bits/stdc++.h>
#include<math.h>
#define pi 2*acos(0)
using namespace std;
int main()
{
    double r,n;
    while(scanf("%lf%lf",&r,&n)!=EOF)
    {
        //cout<<setprecision(20)<<fixed<<2*acos(0)<<endl;
        double angle=(90-(360/(2*n)))*pi/180;
        double x,y;
        x=r*cos(angle);
        y=r*sin(angle);
        cout<<setprecision(3)<<fixed<<x*y*n<<endl;
    }
    return 0;
}
