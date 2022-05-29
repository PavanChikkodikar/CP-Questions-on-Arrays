#include<iostream>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int sum=0,total=0;
    int a[n-1];
    total = (n*(n+1)/2);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    
    cout<<"Missing element is "<<total-sum<<endl;
}
return 0;
}
