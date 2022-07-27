//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int temp;
   for(int i=1;i<n;i++)
   {
       temp=arr[i];
       {
           int j=i-1;
           while(j!=0)
           {
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }

   }
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}