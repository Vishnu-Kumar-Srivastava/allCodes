//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define max 100
char stk[max];
int top=-1;
void push(char x)
{
    if(top==99)
    {
        cout<<"Stack overflow";
    }
    else
    {

        stk[++top]=x;
    }

}
char pop()
{
    {
        return(stk[top--]);

    }
}
int main()
{
    char arr[30];
    char res[30];
    cout<<"Enter the expression";
    gets(arr);
    int k=0;
  
    for(int i=0;arr[i]!='\0'; i++)
    {
        if((arr[i]>='A' && arr[i]<='Z')||(arr[i]>='a' && arr[i]<='z')||(arr[i]>='0' && arr[i]<='9'))
        {
            res[k++]=arr[i];
        }
        else if(arr[i]=='(')
        {
            push('(');
        }
        else if(arr[i]==')')
        {
            while(stk[top]!='(')
            {
                res[k++]=pop();
            }
            pop();
        }
        else
        {
            push(arr[i]);
        }
    }
    cout<<endl;
    for(int i=0; i<k; i++)
    {
        cout<<res[i]<<" ";
    }
}