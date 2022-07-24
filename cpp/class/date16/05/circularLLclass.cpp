//This code is made by Vishnu Kumar Srivastava
//This code is of Circular LInked list
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct linkedlist{
    int item;
    struct linkedlist *next;
};
typedef struct linkedlist node;
node*head=NULL;
void create()
{
    node*p=head;
    if(head==NULL)
    {
        head=new node;
        cout<<"enter the item"<<endl;
        cin>>head->item;
        head->next=head;
    }
    else
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        node*q=new node;
        cout<<"enter the item"<<endl;
        cin>>q->item;
        q->next=head;
        p->next=q;
    }
}
void insert()
{
    int m;
    cout<<"enter the no. you want to insert after"<<endl;
    cin>>m;
    node*p=head;
    node*q=new node;
    while(p->item!=m)
    {
        p=p->next;
    }
    cout<<"enter the item of the new node"<<endl;
    cin>>q->item;
    q->next=p->next;
    p->next=q;
}
void printt()
{
    node*p=head;
    do{
        cout<<p->item<<" ";
        p=p->next;
    }
    while(p!=head);
    cout<<endl;
}
void insbeg()//insert at beginning
{
   node*p=new node;
   cin>>p->item;
   p->next=head;
   node*q=head;
   while(q->next!=head)
   {
       q=q->next;
   }
   head=p;
   q->next=head;
   
   
}
int main()
{
    int i;

    while(i!=5)
    {
        cout<<"enter the value of i"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            create();
            break;

            case 2:
            printt();
            break;
            
            case 3:
            insert();
            break;

            case 4:
            insbeg();
            break;

            case 5:
            break;
        }
    }
}