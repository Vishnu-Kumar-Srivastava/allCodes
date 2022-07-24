//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int count(int arr[], int n,int j)
{
 int m=arr[j];
 int count=0;
 for(int i=0; i<n;i++)
 {
  if(arr[i]==m)
  {
   count++;
  }
 }
 return count;
}
int main()
{
int t;
cin>>t;
while(t--)
{
 int n,a;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
  cin>>arr[i];
 }
 for(int j=0; j<n; j++)
 {
  int b=count(arr, n, j);
  if(b%arr[j]==0)
  {
   a=1;
  }
  else
  {
   a=0;
   break;
  }

 }
 if(a==0)
 {
  cout<<"NO"<<endl;

 }
 else
 cout<<"Yes"<<endl;
}
}