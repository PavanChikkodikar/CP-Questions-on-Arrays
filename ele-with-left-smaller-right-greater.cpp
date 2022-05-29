
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int a[n];
        int min[n],max[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        int ele = -1;
        int big = a[0];
        int small = a[n-1];

        for(int i=0;i<n;i++)
        {
            if(a[i] > big)
                big = a[i];
            max[i] = big;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] < small)
                small = a[i];
            min[i] = small;
        }
        for(int i=0;i<n;i++)
        {
            if(i!=0 && i!=n-1 && min[i] == max[i])
            {
                ele = min[i];
                break;
            }
        }
        cout<<ele<<endl;
    }
    return 0;
}


