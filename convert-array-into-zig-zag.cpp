
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:	

	void zigZag(int a[], int n) 
	{
	    for(int i=0;i<n-1;i++)
	    {
	        if(i%2 == 0 && a[i] > a[i+1])
	            swap(a[i],a[i+1]);
	        else if(i%2 == 1 && a[i] < a[i+1])
	            swap(a[i],a[i+1]);
	    }
	    return ;
	    
	}
};



int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
 