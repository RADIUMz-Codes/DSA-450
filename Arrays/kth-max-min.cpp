#include<bits/stdc++.h>
using namespace std;

void kthMaxMin(int arr[],int n,int k)
{
    sort(arr,arr+n);
    cout<<"kth smallest = "<<arr[k-1]<<endl;
    cout<<"kth largest = "<<arr[n-k]<<endl;
}

int main()
{
    int arr[]={1,4,6,8,2,9};
    int n=sizeof(arr)/sizeof(int);
    int k=2;
    kthMaxMin(arr,n,k);
    return 0;
}