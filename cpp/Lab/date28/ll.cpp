#include<iostream>
using namespace std;
struct linkedlist
{
    int item;
    struct linkedlist *next;
};
typedef struct linkedlist node;
node*head=NULL;
void create()
{
    node*p=head,*q;
    if(head==NULL)
    {
        head=new node;
        cin>>head->item;
        head->next=NULL;
    }
    else
    {
        while(p->next!=NULL)
        p=p->item;
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
        cout<<p->item<<endl;
        p=p->next;
    }
}
int main()
{
    int i=2;
    while(i!=3)
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
            break;
        }
    }
}