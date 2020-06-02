#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int arr[n],i;
        for(i=0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        if(n==1 || n==2)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
        int m=n-1,k;
        for(i=0 ; i<n-1 ; i++){
            int j=i+1;
            arr[i]=arr[i]-arr[j];
        }
        for(k=0 ; k<m ; k++){
                if(arr[k]<0)
                arr[k]=abs(arr[k]);
        }
        int ck,nm=1;
        k=0;
        for(i=1 ; i<m ; i++)
        {

            if(arr[k]>=arr[i]){
                if(arr[k]-arr[i]==nm)
                    {
                        ck=1;
                        nm++;
                    }
                else
                {
                    ck=0;
                    break;
                }
            }
            else{
                if(arr[i]-arr[k]==nm)
                    {
                        ck=1;
                        nm++;
                    }
                else
                {
                    ck=0;
                    break;
                }
            }
        }
        if(ck==1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
