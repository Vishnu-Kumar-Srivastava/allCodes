//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int front=-1; 
int rear=-1;
void enqueue(int arr[], int n, int x)
{
    if(rear==n)
    {
        cout<<"queue overflow"<<endl;
    }
    else if(rear==-1 && front ==-1)
    {
        front=0;
        rear=0;
        arr[rear]=x;
        rear++;
    }
    else 
    {
        arr[rear]=x;
        rear++;
    }
}
void dequeue(int arr[], int n)
{   
    if(front>rear || front==-1)
    {
        cout<<"Empty queue"<<endl;
    }
    else
    cout<<arr[front++]<<endl;
}


int main()
{
    int n=5;
    int arr[n];
    int i=0;
    while(i!=4)
    {
        cout<<"to enqueue press 1. To dequeue press 2. to print press 3. to end press 4"<<endl;
        cin>>i;
        {
            switch(i)
            {
                case 1:
                cout<<"Enter the number";
                int x;
                cin>>x;
                enqueue(arr , n , x);
                break;

                case 2:
                dequeue(arr, n);
                break;

                case 3:
                for(int i=front; i<rear;i++)
                {
                    cout<<arr[i]<<" ";
                }
                break;

                case 4:
                break;
            }
        }
   
    }
}