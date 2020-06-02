#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    while(1)
    {
        cin>>h1;
        cin>>m1;
        cin>>h2;
        cin>>m2;
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;
        int c=0;
        while(h1!=h2 || m1!=m2)
        {
            if(m1==60)
            {

                m1=0;
                if(h1==23)
                    h1=0;
                else
                    h1++;
            }
            m1++;
            c++;
        }
        cout<<c<<endl;
    }
}
