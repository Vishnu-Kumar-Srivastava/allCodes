//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top=-1;
int front=-1;
int rear=-1;
void push(int arr[], int n, int x)
{
    if(top==n-1)
    {
        cout<<"Stack overflow";
    }
    else
    {
        arr[++top]=x;
    }
}
int pop(int arr[], int n)
{
    if(top==-1)
    {
        cout<<"Underflow condition";
        return 0;
    }
    else
    {
        return(arr[top--]);

    }
}
void enqueue(int arr[], int n, int x)
{
    if(rear>=n-1)
    {
        cout<<"queue overflow";
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
            arr[rear]=x;

        }
        else
        arr[++rear]=x;
    }
}

void view(int Arr[], int n)
{
    for(int i=front; i<=rear; i++)
    {
        cout<<Arr[i]<<endl;
    }
}
int main()
{
    int n;

    cout<<"Enter the no. of elements in stack"<<endl;
    cin>>n;
    int arr[n];
    int Arr[n];
    int choice=0;
    while(choice!=4)
    {   
        cout<<"press 1 to enter in stack, 2 to pop from stack 3 to print the queue and 4 to end";
        cin>>choice;
        switch(choice)
        {
            case 1:
            int temp;
            cin>>temp;
            push( arr, n, temp);
            break;

            case 2:
            int y;
            y=pop(arr, n);
            enqueue(Arr,n,y);

            break;
            
            case 3:
            view(Arr, n);
            break;

            case 4:
            break;
        }
    }
}