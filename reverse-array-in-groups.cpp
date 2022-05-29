#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x,k,l;
        cin>>n;        
        int arr[n];       
        for(i=0;i<n;i++)
        cin>>arr[i];       
        cin>>x;
        i=0;
        k=n%x;

        while(i<n-k)
        {
            for(j=x+i;j>i;j--)
            {
                cout<<arr[j-1]<<" ";
            }                
            i=i+x;
        }

        for(i=n-1;i>=n-k;i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}