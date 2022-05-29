
#include <iostream>
using namespace std;



class Solution
{
    public:
 
    int equilibriumPoint(long long a[], int n) 
    {
    
        int pos =-1;//if we dont have equilibrium then we return -1
        int leftSum = 0;
        int rightSum = 0;
        
        for(int i=0;i<n;i++)
            rightSum = rightSum+a[i];//summing all the array elements
            
        for(int i=0;i<n;i++)
        {
            rightSum = rightSum-a[i];
            if(leftSum == rightSum)
            {
                pos = i+1;
                break;
            }
            leftSum=leftSum+a[i];
        }
        return pos;
    }

};



int main() 
{

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}