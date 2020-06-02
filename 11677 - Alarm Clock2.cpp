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
        int hsm;
        hsm=h1-h2;
        if(hsm==0)
        {
            if(m1-m2>0)
            {
                int m;
                m=(60-m1)+m2+(23*60);
                cout<<m<<endl;
            }
            else
                cout<<m2-m1<<endl;
        }
        else if(hsm>0)
        {
            int m;
            m=((24-h1)*60)+(h2*60)+(m2-m1);
            cout<<m<<endl;
        }
        else
        {
            int m;
            m=(h2-h1)*60+(m2-m1);
            cout<<m<<endl;
        }
    }
}

