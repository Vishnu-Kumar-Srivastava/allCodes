//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   int n,c;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   int sum1=0;
   int ans=arr[0];
   
   for(int i=0; i<n; i++)
   {
      sum1=sum1+arr[i];
      if(sum1>0)
      {
         if(ans<sum1)
         {
            ans=sum1;
         }
      }
      else
      {
         sum1=0;
         sum1=sum1+arr[i];
         if(ans<sum1)
         {
            ans=sum1;
         }
         sum1=0;
         
      }
      
   }  
   cout<<ans;
}