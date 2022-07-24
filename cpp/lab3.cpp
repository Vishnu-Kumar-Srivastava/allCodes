//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 if(n%2==0)
 {
    int mid=(n-1)/2;
    int j=mid+1;
    for(int i=0; i<n-(mid+1);i++)
    {
        Arr[i]=arr[j];
        j++;
    }
    int k=0;
      for(int i=n-1; i>mid; i--)
    {
       
        Arr[i]=arr[k];
        k++;
    }
    for(int i=0; i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
 }
 else
 {
    int mid=(n-1)/2;
    int j=mid+1;
    for(int i=0; i<n-(mid+1);i++)
    {
        Arr[i]=arr[j];
        j++;
    }
    int k=0;
      for(int i=n-1; i>=mid; i--)
    {
       
        Arr[i]=arr[k];
        k++;
    }
    for(int i=0; i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
 } 
}


