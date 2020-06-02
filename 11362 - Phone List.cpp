#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,done=1;
        vector< string > lists;
        lists.clear();
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            string s;
            cin>>s;
            lists.push_back(s);
        }
        sort(lists.begin(),lists.end());
        for(int i=0 ; i<n-1 ; i++)
        {
            if(lists[i+1].size()>=lists[i].size())
            {
                string ss=lists[i+1].substr(0,lists[i].size());
                if(ss==lists[i])
                {
                    done=0;
                    break;
                }
            }
        }
        if(done)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
