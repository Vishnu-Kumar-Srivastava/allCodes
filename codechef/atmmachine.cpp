//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n;i++)
        {
            if(arr[i]<=k)
            {
                cout<<"1";
                k=k-arr[i]; 
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}