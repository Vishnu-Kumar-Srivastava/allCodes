//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no. of elements in first array";
    cin>>n;
    cin>>m;
    int arr[n], Arr[m];
    cout<<"Enter the array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>Arr[i];
    }
    int A[m+n];
    int p=0,q=0;
    for(int i=0; i<m+n; i++)
    {   
        if(p<n && q<m)
        {
            if(arr[p]<=Arr[q])
            {
                A[i]=arr[p++];
            }
            else
            {
                A[i]=Arr[q++];
            }
        }
        else if(p>=n)
        {
            A[i]=Arr[q++];
        }
        else if(q>=m)
        {
            A[i]=arr[p++];
        }
    

    }
    for(int i=0;i<m+n; i++)
    {
        cout<<A[i]<<" ";
    }


}