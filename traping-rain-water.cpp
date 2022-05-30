#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int water = 0,lmax = 0,rmax = 0;
        int n;
        cin>>n;
        int a[n],l[n],r[n];

        for(int i=0;i<n;i++)
            cin>>a[i];
        //for left grestest
        for(int i=1;i<n;i++)
        {
            if(a[i-1] > lmax)
                lmax = a[i-1];
            l[i] = lmax;
        }
        //for right grestest
        for(int i=n-2;i>=0;i--)
        {
            if(a[i+1] > rmax)
                rmax = a[i+1];
            r[i] = rmax;
        }
        int minlr;
        for(int i=1;i<n-1;i++)
        {
            minlr = min(l[i] ,r[i]);
            if(minlr > a[i])
                water = water + minlr - a[i];
        }
        cout<<water<<endl;
    }
return 0;
}