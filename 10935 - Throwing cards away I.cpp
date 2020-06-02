#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        queue<int>q;
        for(int i=1 ; i<=n ; i++)
        {
            q.push(i);
        }
        int A[55],cnt=0;
        while(!q.empty())
        {
            A[cnt++]=q.front();//Discarding cards are stored in an Array
            q.pop();           //remove that discarded card;
            int temp=q.front();//Taking the next element that will go bottom
            q.push(temp);       //pushing back the element to bottom and storing to queue
            q.pop();            //Removing the next element
        }
        cout<<"Discarded cards:";
        for(int i=0 ; i<cnt-1 ; i++)
            {
                cout<<" "<<A[i];
            if(i<cnt-2)
                cout<<",";
            }
        cout<<"\n";
        cout<<"Remaining card:";
        cout<<" "<<A[cnt-1];
        cout<<"\n";
    }
    return 0;
}
