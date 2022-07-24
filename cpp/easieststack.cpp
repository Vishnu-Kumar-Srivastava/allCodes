//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top=-1;
void push(int arr[], int x, int n)
{
    if(top==n-1)
    {
        cout<<"Stack overflow";
    }
    else
    {
        arr[++top]=x;
    }
0
}
void pop(int arr[], int n)
{
    if(top==-1)
    {
        cout<<"Underflow condition";
    }
    else
    {
        cout<<arr[top--];

    }
}
print(int arr[], int n)
{
    for(int i=top; i>-1; i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of stack";
    cin>>n;
    int arr[n];
    int choice=0;
    while(choice!=4)
    {   
        cin>>choice;
        switch(choice)
        {
            case 1:
            int temp;
            cin>>temp;
            push( arr, temp, n);
            break;

            case 2:
            pop(arr, n);
            break;
            
            case 3:
            print(arr, n);
            break;

            case 4:
            break;
        }
    }
}