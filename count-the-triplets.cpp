#include<bits/stdc++.h>
using namespace std;

int main() {

int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];

sort(a,a+n);
int ans = 0;

for(int i=0;i<n-2;i++)
{
    int l=i+1;
    int r=n-1;

    while(l<r)
    {
        if(a[i]+a[l]+a[r] == x)
        {
            ans=1;
            break;
        }
        else if(a[i]+a[l]+a[r] < r)
            l++;
        else
            r--;
    }
    if(ans == 1)
        break;
}
cout<<ans<<endl;


return 0;
}