//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    
    
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];

        }
        int i=0;
        int count=0;
        for(int i=0;i<4;i++)
        {
            if(arr[i]<10)
            count++;
           
        }
        cout<<4-count;
     
        

    
}