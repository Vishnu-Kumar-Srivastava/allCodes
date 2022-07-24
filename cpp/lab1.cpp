//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
cout<<"Enter the dize of array";
int n,t=0,i,j,q;
cin>>n;
int arr[n];
int a[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(j=0;j<n;j++)
{
    if(arr[j]%2==0)
    {
        a[t]=arr[j];
        t++;
    }
}
for(q=0;q<t;q++)
{
    cout<<a[q];
}
}