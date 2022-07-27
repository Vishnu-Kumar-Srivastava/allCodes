//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int front=-1;
int rear=-1;
int arr[5];
void enqueue(int x)
{
    if(rear==4)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear=rear+1;
        }
        arr[rear]=x;
    }
    
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        cout<<"empty queue"<<endl;

    }
    else
    {
        cout<<arr[front++];
    }
}
int main()
{
    int n=0;
    while(n!=4)
    {
        cout<<"Press 1 to enqueue. Press 2 to dequeue. Press 3 to print . Print 4 to eliminte the process"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
            int x;
            cin>>x;
            enqueue(x);
            break;
            case 2:
            dequeue();
            break;

            case 3:
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

            case 4:
            break;

        }

    }
    

}