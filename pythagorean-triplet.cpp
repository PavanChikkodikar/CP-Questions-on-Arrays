
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

	bool checkTriplet(int a[], int n) 
	{
	    sort(a,a+n);
	    int l,r,num,sum;
	    for(int i=n-1;i>1;i--)
	    {
	        l=0;
	        r=i-1;
	        num = a[i]*a[i];
	        while(l < r)
	        {
	            sum = (a[l]*a[l]) + (a[r]*a[r]);
	            if(sum == num)
	                return true;
	            else if(sum > num)
	                r--;
	            else
	                l++;
	        }
	    }
	    return false;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  