//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top=-1;
int arr[10];
int Arr[10];
int front =-1;
int rear=-1;

int main()
{   int a;
    void push(int);
    int pop();
    void enqueue(int);
    void dequeue(int);
    for(int i=0; i<5;i++)
    {
        cin>>a;
        push(a);
    }
    for(int i=0; i<5;i++)
    {
       int x=pop();
       enqueue(x);
    }
     for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
      for(int i=0; i<5;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
void push(int x)
{   if()
    top++;
    arr[top]=x;
}
int pop()
{
    return(arr[top--]);
}
void enqueue(int x)
{
    front=front +1;
    Arr[front]=x;
}