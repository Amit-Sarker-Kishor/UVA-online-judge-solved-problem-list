#include<iostream>
//#include<bits\stdc++.h>
#include<string.h>
#include<cstdio>
int A[150];
using namespace std;
int main()
{
    int n;
    int Max,B[30],x=0;
    cin>>n;
    getchar();
    for(int i=0 ; i<n ; i++)
    {
        char ch[1000];
        gets(ch);
        for(int j=0 ; j<strlen(ch) ; j++)
        {
            if(ch[j]>='a'&& ch[j]<='z')
            {
                ch[j]-=32;
            }
            if(ch[j]>='A' && ch[j]<='Z')
                A[ch[j]]++;
        }
    }
    int C[100];
    //for(int i=65 ; i<=90 ; i++)
    //  cout<<A[i]<<" ";
    for(int i=65 ; i<=90 ; i++)
    {
        Max=0;
        for(int j=65 ; j<=90 ; j++)
        {
            if(A[j]>Max)
            {
                Max=A[j];
                B[x]=j;
                C[x]=Max;
            }
        }
        if(Max!=0)
        {
            A[B[x]]=0;
            x++;
        }
    }
    for(int i=0 ; i<x ; i++)
    {
        char ch=B[i];
        cout<<ch<<" "<<C[i]<<endl;
    }

}
