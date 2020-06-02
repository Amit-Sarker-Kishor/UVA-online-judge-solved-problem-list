#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ch;
    while(getline(cin,ch))
    {
        if(ch[0]=='\0')
            break;
        cout<<ch<<endl;
    }
}
