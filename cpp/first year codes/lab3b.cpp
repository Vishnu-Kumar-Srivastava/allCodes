//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int arr[6]={10,5,20,7,9,25};
    int mid=5/2;
    int A[6];
     int j=mid+1;
    for(int i=0;i<6-(mid+1); i++)
    {
       
         A[i]=arr[j];
         j++;
    }
     int k=0;
      for(int i=6-1; i>mid; i--)
    {
       
        A[i]=arr[k];
        k++;
    }
    
    for(int i=0; i<6;i++)
    {
        cout<<A[i]<<" ";
    }



}
    