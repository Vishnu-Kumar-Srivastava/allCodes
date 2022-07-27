//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int deletetion(int arr[], int n, int x)
{
    int temp=arr[x];
    for(int i=x; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    return temp;
}
int main()
{
    int arr[5]={7,5,8,4,5};
    cout<<deletetion(arr, 5, 2)<<endl;
    
    for(int i=0; i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

}