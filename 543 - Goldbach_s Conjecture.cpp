#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        for(int i=2 ; i<n ; i++)
        {
            int ck=1;
            for(int j=2 ; j<i ; j++)
            {
                if(i%j==0)
                    ck=0;
            }
            if(ck)
            {
                for(int j=2 ; j<n-i ; j++)
                {
                    if((n-i)%j!=0)
                    {
                        cout<<i<<" "<<n-i<<endl;
                        break;
                    }
                }
            }
        }
    }
}
