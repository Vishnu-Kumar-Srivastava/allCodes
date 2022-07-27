//This code is made by Vishnu Kumar Srivastava
//This code is of Double LInked List
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct DLL
{
    struct DLL*prev;
    int item;
    struct DLL*next;
};
typedef struct DLL node;
node*head=NULL;
void create()
{
    if(head==NULL)
    {
        head=new node;
        head->prev=NULL;
        cout<<"enter the item"<<endl;
        cin>>head->item;
        head->next=NULL;

    }
    else
    {
        node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        node*q=new node;
        cout<<"enter the item"<<endl;
        cin>>q->item;
        q->prev=p;
        p->next=q;
        q->next=NULL;

    }
}
void insbeg()
{
    node*p=new node;
    p->next=head;
    cout<<"enter the item"<<endl;
    cin>>p->item;
    p->prev=NULL;
    head->prev=p;
    head=p;

}
void printt()
{
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->item<<" ";
        p=p->next;
        
    }
    cout<<endl;
    
}
void ins_mid()
{
    int m;
    node*p=head;
    cout<<"enter the no. you want to add after"<<endl;
    cin>>m;
    while(p->item!=m)
    {
        p=p->next;
    }
    node*q=new node;
    q->prev=p;
    cout<<"enter the item";
    cin>>q->item;
    q->next=p->next;
    p->next=q;
    

}
void ins_last()
{
    node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=new node;
    p->next->next=NULL;
    p->next->prev=p;
    cin>>p->next->item;
}
void dellast()
{
    
    node*p=head;
    if(p==NULL)
    {
        free(p);
    }
    else
    {
        while(p->next!=NULL)
        {
             p=p->next;
        }
   
        p->prev->next=NULL;
        free(p);
    }
    
}
void delmid()
{
    int m;
    node*p=head;
    cout<<"enter the no. you want to delete"<<endl;
    cin>>m;
    while(p->item!=m)
    {
        if(p->next==NULL)
        {
            cout<<"item not found";
            break;
        }
        else
        p=p->next;
    }
    if(p==NULL)
    {
        free(p);
    }
    else{
    p->next->prev=p->prev;
    p->prev->next=p->next;
    free(p);
    }

   
}
void delbeg()
{
    if(head==NULL)
    {
        free(head);
    }
    else
    {
        head=head->next;
        free(head->prev);
        head->prev=NULL;
    }
    
    
}

int main()
{

    int i;
    while(i!=9)
    {
        cout<<"enter your choice";
        cin>>i;
        switch(i)
        {
            case 1:
            create();
            break;

            case 2:
            insbeg();
            break;

            case 3:
            printt();
            break;

            case 4:
            ins_mid();
            break;

            case 5:
            ins_last();
            break;

            case 6:
            dellast();
            break;

            case 7:
            delmid();
            break;

            case 8:
            delbeg();
            break;

            case 9:
            break;


        }
    }
}