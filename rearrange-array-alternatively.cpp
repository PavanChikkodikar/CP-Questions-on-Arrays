#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int min=0,max=n-1,m=a[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            a[i] = a[i] + ((a[max] % m) * m);
            max--;
        }
        else{
            a[i] = a[i] + ((a[min] % m) * m);
            min++;
        }
        cout<<a[i]/m<<" ";
    }
    cout<<endl;
}
return 0;
}