#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        char S0[205],S1[205],sum[205];
        cin>>S0;
        cin>>S1;
        //cout<<S0<<S1;
        ll carry=0,k=0,i=0,j=0;
        while(i<strlen(S0)&&j<strlen(S1))
        {
            ll tmp;
            tmp=S0[i++]-'0'+S1[j++]-'0'+carry;
            if(tmp>9)
            {
                carry=1;
                tmp=tmp%10;
            }
            else
                carry=0;
            sum[k++]=tmp+'0';
        }
        while(i<strlen(S0))
        {
            ll tmp;
            tmp=S0[i++]-'0'+carry;
            if(tmp>9)
            {
                carry=1;
                tmp=tmp%10;
            }
            else
                carry=0;
            sum[k++]=tmp+'0';
        }
        while(j<strlen(S1))
        {
            ll tmp;
            tmp=S1[j++]-'0'+carry;
            if(tmp>9)
            {
                carry=1;
                tmp=tmp%10;
            }
            else
                carry=0;
            sum[k++]=tmp+'0';
        }
        if(carry==1)
            {
                sum[k]='1';
                sum[k+1]='\0';
            }
        else
            sum[k]='\0';
        k=0;
        while(sum[k]=='0')
            k++;
        for( ; k<strlen(sum) ; k++)
            cout<<sum[k];
        cout<<endl;
    }
    return 0;
}
