//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int solution()
{
    int n,k;
    cin>>n;cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        
        arr[i]=arr[i]-k;
        if(arr[i]<0)
        {
            return (i+1);
        }
        else 
        arr[i+1]=arr[i+1]+arr[i];
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int q= solution();
     if(q==0)
     {
         cout<<"YES"<<endl;

     }
     else 
     cout<<"NO"<<" "<<q<<endl;
    }
}