#include<iostream>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];

    int mx=a[0],step=a[0],jump=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1){
            cout<<jump;
            break;
        }
            
        mx=max(mx,a[i]+i);

        step--;
        if(step==0)
        {
            jump++;
            if(i>=mx)
            {
                cout<<-1;
                break;
            }
            step=mx-i;
        }
    }
    if(i!=n)
        cout<<-1;
        cout<<endl;
}

return 0;
}