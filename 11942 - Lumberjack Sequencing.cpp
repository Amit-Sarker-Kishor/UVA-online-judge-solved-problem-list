#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<"Lumberjacks:\n";
        for(int i=0 ; i<n ; i++)
        {
            int ar[10],ck1=0,ck0=0;
            for(int i=0 ; i<10 ; i++)
            {
                cin>>ar[i];
            }
            for(int i=0 ; i<9 ; i++)
            {
                if(ar[i]>ar[i+1])
                    ck1++;
                else if(ar[i+1]>ar[i])
                    ck0++;
                else
                {

                }
            }
            if(ck1==9)
                cout<<"Ordered\n";
            else if(ck0==9)
                cout<<"Ordered\n";
            else
                cout<<"Unordered\n";
        }
    }
}
/*3
13 25 39 40 55 62 68 77 88 95
88 62 77 20 40 10 99 56 45 36
91 78 61 59 54 49 43 33 26 18*/

