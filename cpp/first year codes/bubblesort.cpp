//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bubble_sort(int arr[], int n)
{
    int k,count=0;
    while(count<n-1)
    {
for(int i=0;i<n-1;i++)
    {
         if(arr[i+1]<arr[i])
            {
                k=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=k; 
            }
    }
    count=count+1;
    }
}
int main()
{
    int n,arr[n];
    cout<<"Enter the no.of elements in array";
    cin>>n;
    cout<<"Enter the array";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}
