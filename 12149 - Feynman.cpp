#include<iostream>
int ar[100];
using namespace std;
int feynmandp(int n)
{

    if(n==1)
        return n;
    if(n==2)
       return ar[n]=5;
    ar[n]=feynmandp(n-1)+n*n;
    return ar[n];
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int s=feynmandp(n);
        cout<<s<<endl;
    }
}
