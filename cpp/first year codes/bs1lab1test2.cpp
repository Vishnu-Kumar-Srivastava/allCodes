//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top1=-1;
int top2=-1;
void push1(int arr[], int n, int x)
{
    arr[++top1]=x;
}
int pop1(int arr[], int n)
{
    return(arr[top1--]);
}
void push2(int arr[], int n, int x)
{
    arr[++top2]=x;
}

int pop2(int arr[], int n)
{
    return(arr[top2--]);
}

int main()
{   
    int n;
    cout<<"enter the no. of elements in array";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int mid=(n-1)/2;
    int arr[mid+1];
    int Arr[n-mid-1];
    for(int i=0;i<=mid;i++)
    {
       
        push1(arr,mid+1,A[i]);
    }
    for(int i=n-1;i>=mid+1;i--)
    {
        
        push2(Arr,n-mid-1,A[i]);
    }
     for(int i=0;i<=mid;i++)
    {
        int x=pop1(arr, mid+1);
        cout<<x;
        cout<<" ";
        
    }

    cout<<endl;
    for(int i=0; i<n-mid-1;i++)
    {
         int x=pop2(Arr,n-mid-1 );
         cout<<x;
         cout<<" ";
    }
}