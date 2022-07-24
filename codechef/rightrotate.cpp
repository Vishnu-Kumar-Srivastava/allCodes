//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void rightrotate(int arr[], int n)
{
    int q=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=q;
}
int check(int arr[], int n,int t)
{
   if((arr[0]+arr[n-1])>=t)
   {
       return (arr[0]+arr[n-1]);
   }
   else 
   return t;
    
}
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int t=arr[0]+arr[n-1];

        for(int i=1;i<n;i++)
        {
            rightrotate(arr,n);
            t=check(arr, n, t);
        }
        cout<<t<<endl;
    }
}