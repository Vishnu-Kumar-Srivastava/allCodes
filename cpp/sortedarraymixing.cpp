//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{int a,b;
    cout<<"enter the no. of elements in the first array:\n";
    cin>>a;
    int A[a];
    cout<<"Enter the array";
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    
    cout<<"enter the no. of elements in the second array:\n";
    cin>>b;
    int B[b];
    for(int i=0;i<b;i++)
    {
        cin>>B[i];
    }
    int z=0,p=0,t=0;
    int arr[a+b];
    int c=0;
    
   
    while(c<a+b)
    {
        if(A[z]<=B[p])
        {
           arr[t]=A[z];
           A[z]=2147483647;
           if(z+1<a)
           {
           z++;}
           cout<<arr[t]<<" ";
           t++;
           c++;

        }
        if(A[z]>B[p])
        {
           arr[t]=B[p];
           cout<<arr[t]<<" ";
           B[p]=2147483647;
           if(p+1<b)
           {p++;}
           
           t++;
           c++;
        }
        
    }
}
  