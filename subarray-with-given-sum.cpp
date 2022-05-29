#include<iostream>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int n,s;
    int flag=0,start=0,sum=0;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        while(sum>s)
        {
            sum=sum-a[start];
            start++;
        }
        if(sum == s)
        {
            cout<<start+1<<" "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<-1<<endl;
    }
}
return 0;
}