#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        if(x+y>z)
        {
            if(x+z>y)
            {
                if(z+y>x)
                    cout<<"OK"<<endl;
                else
                    cout<<"Wrong!!"<<endl;
            }
            else
                cout<<"Wrong!!"<<endl;
        }
        else
            cout<<"Wrong!!"<<endl;
    }
}
