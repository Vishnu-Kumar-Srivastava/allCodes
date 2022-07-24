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
        int max_val=0;
        for(int i=1;i<n;i++)
        {
           max_val=max(max_val, arr[i]+arr[i-1]);
        }
        cout<<max_val<<endl;
    } 


}