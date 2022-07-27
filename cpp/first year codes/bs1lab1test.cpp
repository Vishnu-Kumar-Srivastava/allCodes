//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int rear1=-1;
int front1=-1;
int rear2=-1;
int front2=-1;
void enqueue1(int arr[], int n, int x)
{
    if(front1==-1)
    {
        front1 =0;
        rear1=0;
        arr[rear1]=x;
    }
    else
    {
        arr[++rear1]=x;
    }
}
int dequeue1(int arr[], int n)
{
    return(arr[front1++]);
}
void enqueue2(int arr[], int n, int x)
{
    if(front2==-1)
    {
        front2 =0;
        rear2=0;
        arr[rear2]=x;
    }
    else
    {
        arr[++rear2]=x;
    }
}
int dequeue2(int arr[], int n)
{
    return(arr[front2++]);
}

int main()
{
    int n,m,x;
    cout<<"enter  no.of  elements in queue 1";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in queue 1";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        enqueue1(arr, n, x);
    }
    cout<<"enter the no. of elements in queue 2";
    cin>>m;
    int Arr[m];
    cout<<"enter the elements in queue 2";
    for(int i=0; i<m; i++)
    {
       int y;
       cin>>y;
       enqueue2(Arr, m, y);
    }

    int A[m+n];
    for(int i=0; i<n;i++)
    {
        A[i]=dequeue1(arr, n);
    }
    for(int i=m+n-1; i>n-1;i--)
    {
        A[i]=dequeue2(Arr, m );
    }
    for(int i=0; i<m+n; i++)
    {
        cout<<A[i]<<" ";
    }
    

}