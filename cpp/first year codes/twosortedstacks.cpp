#include<iostream>
using namespace std;
int top1=-1;
int top2=-1;
#define n 50
#define m 50
int stk1[n];
int stk2[m];
void push1(int x)
{
    if(top1>n)
    {
        cout<<"overflow";
    }
    else
    stk1[++top1]=x;
}
int pop1()
{
  return(stk1[top1--]);  
}
void push2(int x)
{
    if(top2>n)
    {
        cout<<"overflow";
    }
    else
    stk2[++top2]=x;
}
int pop2()
{
  return(stk2[top2--]);  
}
int main()
{
    cout<<"enter the no. of elements in first stack";
    int p;
    cin>>p;
    cout<<"Enter the elements of the first stack";
    for(int i=0; i<p;i++)
    {
        int x;
        cin>>x;
        push1(x);
    }
    cout<<"enter the no. of elements in second stack";
    int q;
    cin>>q;
    cout<<"Enter the elements of the second stack";
    for(int i=0; i<q;i++)
    {
         int x;
        cin>>x;
        push2(x);
    }
   
    int arr[p+q];
    int i=p+q-1;
    while(top1!=-1 && top2!=-1)
    {
        if(stk1[top1]>=stk2[top2])
        {
            arr[i]=pop1();
            i--;
        }
        else if(stk1[top1]<=stk2[top2])
        {
            arr[i]=pop2();
            i--;
            
        }
    }
    if(top1==-1)
    {
        while(top2!=-1)
        {
            arr[i]=pop2();
            i--;
        }
    }
    if(top2==-1)
    {
        while(top1!=-1)
        {
            arr[i]=pop1();
            i--;
        }
    }
    
    
    for(int j=0; j<p+q;j++)
    {
        cout<<arr[j]<<" ";
    }
}

