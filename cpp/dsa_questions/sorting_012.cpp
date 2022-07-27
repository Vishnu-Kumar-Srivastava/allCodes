//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   int n, c0=0, c1=0, c2=0;
   cin>>n;
   int arr[n];
   for(int i=0; i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      c0++;
      if(arr[i]==1)
      c1++;
      if(arr[i]==2)
      c2++;
   }
 
   for(int i=0;i<c0;i++)
   {
      arr[i]=0;
   }
   for(int i=c0; i<c0+c1; i++)
      arr[i]=1;
   for(int i=c1+c0; i<c0+c1+c2; i++)
      arr[i]=2;
   for(int i=0; i<n; i++)
   {
      cout<<arr[i]<<" ";
   }

}