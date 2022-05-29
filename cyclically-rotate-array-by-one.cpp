#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{

//1) Store last element in a variable say x.
//2) Shift all elements one position ahead.
//3) Replace first element of array with x.
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is ";
    for (i = 0; i < n; i++)
        cout << arr[i];

    rotate(arr, n);

    cout << "\nRotated array is ";
    for (i = 0; i < n; i++)
        cout << arr[i];

    return 0;
}


//Optimal code using stl


#include<iostream>
using namespace std;
//stl we use rotate   sort(a,a+n)
// sort(a.begin(),a.end())
int main() 
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        
        int last = a[n-1];

        for(i=n-2;i>=0;i--)
        {
            a[i+1] = a[i];
        }

        a[0]=last;

        for(i=0;i<n;i++)
            cout<<a[i]<<" ";

        cout<<endl;
    }
return 0;
}