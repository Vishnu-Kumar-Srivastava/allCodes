//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
#define max 100
char stk[max];
int top=-1;
void push(char arr[],char x){
    if (top==100){
        cout<<"overflow"<<endl;
    }
    else{
        
        arr[++top]=x;
    }
}
char pop(char arr[]){
    return arr[top--];
}
void print(int arr[]){
    for(int i=top;i>-1;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    char arr[30];
    char res[30];
    cout<<"Enter the expression ";
    gets(arr);
    int k=0;
    for(int i=0;arr[i]!='\0';i++){
        if ((arr[i]>='A' && arr[i]<='Z')||(arr[i]>='a' && arr[i]<='z')||(arr[i]>='0' && arr[i]<='9')){
            res[k++]=arr[i];
        }
        else if (arr[i]=='(')
        {
            push(stk,'(');
        }
        else if (arr[i]==')'){
            while (stk[top]!='('){
                res[k++]=pop(stk);
            }
            pop(stk);
        }
        else{
            push(stk,arr[i]);
        }
    }
    cout<<endl;
    for(int i=0;i<k;i++){
        cout<<res[i];
    }  
    
}