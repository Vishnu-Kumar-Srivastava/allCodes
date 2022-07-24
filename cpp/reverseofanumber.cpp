//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    int m=0;
    while(n!=0)
    {
        n=n/10;
        m++;
    }
   int arr[m];
    for(int i=0; i<m; i++)
    {   
        arr[i]=k%10;
        k=k/10;
    }
    int sum=0;
    for(int i=0;i<m; i++)
    {
       sum=sum+(pow(10,(m-i-1))*arr[i]);
    }
    cout<<sum;
}