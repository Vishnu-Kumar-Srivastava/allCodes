//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void push(int arr[], int n, int top)
{
    if(top==n-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        top++;
        cin>>arr[top];
    }
}
int pop(int arr[], int n, int top)
{
    if(top==-1)
    {
        cout<<"Empty Stack";
        
    }
    else
    {
        return(arr[top--]);
        
    }
}
void print(int arr[], int n, int top)
{
    for(int i=0;i<top;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n,i,m;
    cout<<"Enter the no. of elements in the array";
    cin>>n;
    int arr[n];
    int top=-1;
    cout<<"you will be able to do these functions";
    cin>>m;
     for(int j=0;j<m;j++){
    cout<< "type 1 for push, type 2 for pop and 3 for printing of the stack,4 for nothing";
   
         cin>>i;
   
    switch(i)
    {
    case 1:
    {
        push(arr,n,top);
        break;
    }
    case 2:
    {
        pop(arr,n,top);
        break;
    }
    case 3:
    {
        print(arr,n,top);
        break;
    }
    case 4:
    {
        break;
    }
    }
     } 
    
    
}