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
}

int main()
{
    
    int choice =2;
    while(choice!=3)
    {
        cout<<"Enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
            create();
            break;

            case 2:
            print();
            break;

            case 3:
            break;
        }
    }
}