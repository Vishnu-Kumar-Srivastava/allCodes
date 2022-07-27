//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
int n; 
cin>>n;
int arr[n];
for(int i=0; i<n;i++)
{
    cin>>arr[i];
}
int a;
cin>>a;
int p=arr[0];

for(int j=0; j<a; j++)
    {
     
     int k=0;
     for(int i=1;i<n;i++)
    {
        if(arr[i]<p)
        {
            p=arr[i];
            k=i;
        }    
    }
    int l=arr[n-1];
    arr[n-1]=p;
    arr[k]=l;
    n=n-1;
    }
cout<<p;
}

