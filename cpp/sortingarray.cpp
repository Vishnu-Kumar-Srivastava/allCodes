//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void selection_sort(int arr[], int n)
{
    int k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k; 
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr, n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}