#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double m1,m2,m3;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)!=EOF)
    {
        double a,b,c;
        a=(2/3)*sqrt((2*m2*m2)+(2*m3*m3)-(m1*m1));
        b=(2/3)*sqrt((2*m1*m1)+(2*m3*m3)-(m2*m2));
        c=(2/3)*sqrt((2*m1*m1)+(2*m2*m2)-(m3*m3));
        cout<<a<<endl;
        double area,sdsum;
        sdsum=a+b+c;
        area=sqrt(sdsum*(sdsum-a)*(sdsum-b)*(sdsum-c));
        printf("%.3lf\n",area);
    }
}
