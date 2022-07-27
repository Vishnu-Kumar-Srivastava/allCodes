//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(int arr[], int p , int r)
{
    int i=p-1;
    for(int j=p; j<r; j++)
    {
        if(arr[j]<arr[r])
        {
            i++;
            int k=arr[j];
            arr[j]=arr[i];
            arr[i]=k;
        }
    }
    int k=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=k;
    return i+1;
}
void quicksort(int arr[], int p, int r)
{
    if(p<r)
    {
        int q=partition(arr, p, r);
        quicksort(arr, p, q-1);
        quicksort(arr, q+1, r);
    }
}
int main()
{
int arr[5]={1,2,5,4,3};
     
    quicksort(arr , 0 , 4);
         for( int i=0; i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}