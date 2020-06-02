#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=1 ; tt<=t ; tt++)
    {
        int n,A[25];
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        int mile=0,juice=0;
        for(int i=0 ; i<n ; i++)
        {
            mile+=((A[i]/30)+1)*10;
            juice+=((A[i]/60)+1)*15;
        }
        cout<<"Case "<<tt<<": ";
        if(mile==juice)
            cout<<"Mile Juice "<<mile;
        else if(mile<juice)
            cout<<"Mile "<<mile;
        else
            cout<<"Juice "<<juice;
        cout<<"\n";
    }
    return 0;
}
