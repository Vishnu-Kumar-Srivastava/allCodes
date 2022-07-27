//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    int arr[n];
    int a[n];
    int b[n];
   
    cout<<"Enter all the values";
    for(int i=0;i<n;i++)
    {
        cin<<arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
          
          a[t]=arr[i];
          t++
        }
        
       
    }
    cout<<"even no. are";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
    
    
}

   