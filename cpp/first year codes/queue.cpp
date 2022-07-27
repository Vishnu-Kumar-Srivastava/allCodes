//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int front=0,rear=0;
void enqueue(int arr[], int n)
{
    if(rear>n-1)
    {
        cout<<"overflow";
     
    }
    else {
        cin>>arr[rear];
        rear++;
        }
}
void dequeue(int arr[], int n)
{
    if(front==rear)
    {
        cout<<"empty stack";
    }
    else {
        front=front+1;
        }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Press 1 to add, press 2 to delete, press 3 to print, press 4 to end"<<endl;
    int i=0;
    cin>>i;
    while(i!=4)
    {
        switch(i)
        {
            case 1:
            {
                enqueue(arr,n);
                break;
            }
            case 2:
            {
                dequeue(arr,n);
                break;
            }
            case 3:
            {
                for(int j=front;j<=rear;j++){
                    cout<<arr[j]<<" ";
                }
            }
            case 4:
            {
                
                break;
            }
        }
    }
}