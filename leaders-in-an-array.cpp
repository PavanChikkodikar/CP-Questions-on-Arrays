
#include <bits/stdc++.h>
using namespace std;

class Solution
{

    public:
    vector<int> leaders(int a[], int n){
        
        int max = a[n-1];
        stack<int> s;
        vector<int> out;
        
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] >= max)
            {
                s.push(a[i]);
                max = a[i];
            }
        }
        while(!s.empty())
        {
            out.push_back(s.top());
            s.pop();
        }
        return out;
        
    }
};


int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
       
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        
        vector<int> v = obj.leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  
