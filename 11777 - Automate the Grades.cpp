#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++)
    {
        int t1,t2,f,a,c1,c2,c3;
        cin>>t1>>t2>>f;
        cin>>a;
        cin>>c1>>c2>>c3;
        int bn,b=max(max(c1,c2),c3);
        if(b==c3)
            bn=max(c1,c2);
        else if(b==max(c1,c3))
            bn=max(c2,c3);
        else
            bn=max(c1,c3);
        int cavg=(b+bn)/2;
        int sum=t1+t2+f+a+cavg;
        switch(sum/10)
        {
            case 10:
                cout<<"Case "<<i<<": A\n";
                    break;
            case 9:
                cout<<"Case "<<i<<": A\n";
                    break;
            case 8:
                cout<<"Case "<<i<<": B\n";
                    break;
            case 7:
                cout<<"Case "<<i<<": C\n";
                    break;
            case 6:
                cout<<"Case "<<i<<": D\n";
                    break;
            default:
                cout<<"Case "<<i<<": F\n";
                    break;
        }

    }
    return 0;
}
