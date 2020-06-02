#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long x,y;
        cin>>x>>y;
        long long sum,diff;
        sum=x+y;
        diff=x-y;
        if(sum<0 || diff<0 || sum%2==1 || diff%2==1)
            cout<<"impossible\n";
        else
            cout<<sum/2<<" "<<diff/2<<endl;
    }
}
//2035415231 1462621774
