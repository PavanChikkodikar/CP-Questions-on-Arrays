#include <iostream>
using namespace std;
// current sum maximum sum in kadanes aldo
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];

        long long int cs = a[0],ms = a[0];

        for(i=1;i<n;i++)
        {
            cs = max(cs+a[i],a[i]); //this code takes care of negitive number
            ms = max(ms,cs);
        }
        cout<<ms<<endl;
    }
    
    return 0;
}
