#include<iostream>
using namespace std;
// TC = O(n)
int main()
{
    int n;
    cin>>n;

    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    int co=0,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            co++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }
    
    for(i=0;i<co;i++)
        a[i]=0;
    for(i=co;i<co+c1;i++)
        a[i]=1;
    while(c2--)
    {
        a[i++]=2;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}