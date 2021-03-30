#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int mx,mn;
    mn=mx=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        mx= max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<"max = "<<mx<<endl;
    cout<<"min = "<<mn<<endl;
    return 0;
}