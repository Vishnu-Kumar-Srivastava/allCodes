//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void shiftt(int arr[],int n)
{
    arr[n]=arr[0];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
   int arr[5]={1,2,3,4,5};
    shiftt(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}