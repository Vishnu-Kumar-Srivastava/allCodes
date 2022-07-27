//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(int arr[], int p, int r)
{
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(arr[j]<arr[r])
        {
            i++;
            int k=arr[j];
            arr[j]=arr[i];
            arr[i]=k;
        }
    }
    int k=arr[r];
    arr[r]=arr[i+1];
    arr[i+1]=k;
    return i+1;
}
void quicksort(int arr[], int p , int r)
{
    if(p<r)
    {
       int q= partition(arr , p , r);
       quicksort(arr ,p , q-1);
       quicksort(arr , q+1 , r); 
    }
}
int main()
{
    int n=1;
    
    cout<<"enter the no. of elements in array";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the array";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr , 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}