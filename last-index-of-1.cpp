#include<iostream>
#include<string>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int pos = -1;
    int len = s.length();

    for(int i=len-1;i>=0;i--)
    {
        if(s[i] == '1')
        {
            pos = i;
            break;
        }
    }
    cout<<pos<<endl;
}


return 0;
}