#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,min,dif;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        sort(a,a+n);
        min = a[n-1];

        for(int i=0;i<=n-m;i++)
        {
            dif = a[i+m-1] - a[i];
            if(dif < min)
                min = dif;
        }
        cout<<min<<endl;
    }
return 0;
}