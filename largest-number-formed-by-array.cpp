
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:

    static bool comparator(string s1, string s2)
    {
        string first = s1+s2;
        string second = s2+s1;
        for(int i=0;i<first.size();i++)
        {
            if(first[i] > second[i])
                return true;
            else if(first[i] < second[i])
                return false;
        }
        return false;
    
    }
    
	string printLargest(vector<string> &a) 
	{
	    int n = a.size();
	    string res = "";
	    sort(a.begin(),a.end(),comparator);
	    for(int i=0;i<n;i++)
	        res.append(a[i]);
	        
	    return res;
	}
};


int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  