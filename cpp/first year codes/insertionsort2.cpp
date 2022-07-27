//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int arr[5]={8,5,7,2,0};
     int temp;
     cout<<"i love you";
   for(int i=1;i<5;i++)
   {
       temp=arr[i];
       {
           int j=i-1;
           while(j>=0)
           {    if(temp<arr[j])
            {
               arr[i]=arr[j];
               arr[j]=temp;
               j--;
            }
               else
               j--;
           }
       }

   }
   for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
   
}