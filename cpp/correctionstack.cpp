//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top=-1;
int Arr[50];
int front=-1;
int rear=-1;
void printtt(int arr[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        cout<<arr[j];
    }
}
void push(int arr[], int n, int x)
{
    top++;
    arr[top]=x;
}
int pop(int arr[], int n)
{
    return(arr[top--]);
}
void enqueue(int x)
{
   front=0;
   rear=rear+1;

    Arr[rear]=x;
}
int main()
{   
    int n,x; 
    cin>>n;
    int arr[n];
   for(int i=0; i<n;i++)
    {
        cin>>x;
        push(arr,n,x);
    }
    for(int i=0; i<n;i++)
    {
       int x=pop( arr,n);
       enqueue(x);

      
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=front; i<=rear;i++)
    {
        cout<<Arr[i]<<" ";
    }
    
     
    
}
