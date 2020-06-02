#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        double ar[1000],sum=0.00,avg,total=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>ar[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            sum+=ar[i];
        }
        avg=sum/n;
        for(int i=0 ; i<n ; i++)
        {
            ar[i]=abs(ar[i]-avg);
        }
        cout<<ar[2]<<endl;
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(ar[i]==ar[j])
                {
                    ar[j]=floorf(ar[j]/100)*100;
                    total+=ar[i];
                }
            }
        }
        cout<<total;
    }
}
