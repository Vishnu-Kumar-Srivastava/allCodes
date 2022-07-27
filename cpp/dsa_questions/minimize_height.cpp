//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int largest(int arr[], int n)
{
   int a=arr[0];
   for(int i=0; i<n; i++)
   {
      if(arr[i]>a)
      a=arr[i];
   }
   return a;
}
int smallest(int arr[], int n)
{
   int a=arr[0];
   for(int i=0; i<n; i++)
   {
      if(arr[i]<a)
      a=arr[i];
   }
   return a;
}

int main()
{
   int n,k;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   cin>>k;
   int l=largest(arr,n);
   int s=smallest(arr,n);
   if(l>k)
   cout<<l-s-2*k;
   else
   cout<<l-s;
}