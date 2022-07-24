//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        int arr[n];
        int sumi=0,sumu=0,loss;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            sumi=sumi+arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
            {
                arr[i]=k;
            }
        }
        for(int i=0;i<n;i++)
        {
            sumu=sumu+arr[i];
        }
        loss=sumi-sumu;
        cout<<loss;

    }


}