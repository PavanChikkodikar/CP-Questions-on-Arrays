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

    int j=n-1;
    i=0;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
