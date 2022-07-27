//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct linkedlist
{
    int item;
    struct linkedlist *next;// self referential pointer
};
typedef struct linkedlist node;
node*head=NULL;
void create()
{
    node *p =head,*q;
    if(head==NULL)
    {
        head=new node;
        cin>>head->item;
        head->next=NULL;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=new node;
        cin>>q->item;
        q->next=NULL;
        p->next=q;
    }
}
void print()
{
    node *p=head;
    while(p!=NULL)
    {
        cout<<p->item<<" ";
        p=p->next;

    }
    cout<<endl;
}
void insertion(int x)
{
    node*p=head;
    cout<<"Enter the element you want to add after:"<<endl;
    int m;
    cin>>m;
    while(p->item!=m)
    {
        p=p->next;
    }
    node*q=new node;
    q->item=x; 
    q->next=p->next;
    p->next=q;
     
    
}
void insbeg(int x)
{
    node*q=new node;
    q->next=head->next;
    q->item=head->item;
    head->item=x;
    head->next=q;
}
void delfirst()
{
    node*p=head;

    head=head->next;
    free(p);


}
void dellast()
{
    node*p=head;

    head=head->next;
    free(p);


}
void del(int x)
{
if(x==head->item)
{
    delfirst();
}
else
{
    node*p=head;
node*q=head;
while(p->item!=x)
{
    p=p->next;   
}
while(q->next!=p)
{
    q=q->next;
}
q->next=p->next;
free(p);

}
}
void delmid(int x)
{
    node*p=head;
    while(p->next->item!=x)
    {
        p=p->next;

    }
    p->next=p->next->next;
    free(p->next);
}
void search(int x)
{
    node*p=head;
    while(p->item!=x)
    {
        if(p->next==NULL)
        {
            cout<<"not found";
            break;
            
        }
        else
        p=p->next;
    }
      if(p==NULL)
        {
            cout<<p->item<<endl;
        }
       
    
    
}
void printeven()
{
    node*p=head;
    while(p->next!=NULL)
    
    {
        
        if(p->item%2==0)
        {
            cout<<p->item<<" ";
        }
        p=p->next;
    }
    cout<<endl;
}
void alternate()
{
    node*p=head;
    
    while(p!=NULL)
    {
        cout<<p->item<<" ";
        p=p->next;
        p=p->next;
    }
}
void reversal()//does not work right now
{
    int a,b;
    node*p=head;
    node*q=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    a=p->item;
    p->item=q->item;
    q->item=a;
    b=p->item;
    q=q->next;
    node*r=q;
    while(q->next!=NULL)
    {
        while(r->next->item!=b)
        {
            r=r->next;
            
        }
        a=r->item;
        r->item=q->item;
        q->item=a;
        b=r->item;
        q=q->next;
        node*r=q;


    }

    
    
    
    
}
int main()
{
    int i=2;
    while(i!=10)
    {
        cout<<"enter your choice";
        cin>>i;
        switch(i)
        {
            case 1:
            create();
            break;

            case 2:
            print();
            break;

            case 3:
            int x;
            cin>>x;
            insertion(x);
            break;

            case 4:
            
            cin>>x;
            insbeg(x);
            break;

            case 5:
            cout<<"Enter the item you want to delete"<<endl;
            cin>>x;
            delmid(x);
            break;

            case 6:
            cin>>x;
            search(x);
            break;

            case 7:
            printeven();
            break;

            case 8:
            alternate();
            break;

            case 9:
            reversal();
            break;

            case 10:
            break;
        }
    }
}