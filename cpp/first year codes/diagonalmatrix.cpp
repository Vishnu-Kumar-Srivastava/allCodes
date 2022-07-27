//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    cout<<"using 4 by 4 diagonal matrix"<<endl;
    cout<<"enter the non zero elements in row major form"<<endl;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
            {
                
            
               cout<<arr[k]<<" ";
                k++;
            }
            else
            {
               cout<<0<<" ";
            }
        }
        cout<<endl;
    }



}