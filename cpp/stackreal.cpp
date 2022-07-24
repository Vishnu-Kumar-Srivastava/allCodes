//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int top=-1;
int arr[10];
int pop()
{
    if(top==-1)
    {
       cout<<"empty stack";
    }
    else
    {
        return arr[top--];
    }
}


int main()
{   int a;
    void push(int);
    
    int b=0;
    cout<<"enter 1 to push: enter 2 to pop:3 to end"<<endl;
    while(b!=3){
        cin>>b; 
        switch(b)
        {
            case 1:
            
                cin>>a;
                push(a);
                break;
            
            case 2:
            if (top!=-1)
             {cout<<pop()<<endl;}
             else
             cout<<"empty stack"<<endl;
            break; 
            case 3:
            break;

        }
    }
     for(int i=0; i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
   
}
void push(int x)
{   if(top<10)
    {top++;
    arr[top]=x;
    }
    else{
        cout<<"overflow";
    }
}



