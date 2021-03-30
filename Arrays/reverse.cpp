#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<=n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}