#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,t;
    while(cin>>t && cin>>n && n!=0 && t!=0)
    {
        int A[15];
        for(int i=0 ; i<n ; i++)
        {
            cin>>A[i];
        }
        int ck=0,Ndist=1,ok=0;
        cout<<"Sums of "<<t<<":\n";
        for(int i=0 ; i<n ; i++)
        {
            int sum=0,k=2;
            vector< int >store;
            store.push_back(A[i]);
            sum=A[i];
            for(int j=i+1 ; j<n ; j++)
            {
                if((sum+A[j])<=t)
                {
                    sum+=A[j];
                    store.push_back(A[j]);
                }
            }
            if(sum==t)
            {
                ck=1;
                Ndist=1;
                for(int i=0 ; i<store.size()-1 ; i++)
                {
                    if(store[i]!=store[i+1])
                        Ndist=0;
                }
                if(Ndist && ok)
                    continue;
                cout<<store[0];
                for(int i=1 ; i<store.size() ; i++)
                {
                    cout<<"+"<<store[i];
                }
                cout<<"\n";
                if(Ndist)
                    ok=1;
            }
        }
        if(!ck)
            cout<<"NONE\n";
    }
    return 0;
}
