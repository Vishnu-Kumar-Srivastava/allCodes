//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=arr[0]+arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            if((arr[i]+arr[i+1])>=t)
            a=arr[i]+arr[i+1];
        }
        cout<<a<<endl;
    } 


}