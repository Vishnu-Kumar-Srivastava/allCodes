//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    int mark1, mark2, mark3;
    struct student *next;
};
typedef struct student node;
node *head=NULL;

void create()
{
    node *p=head, *q;
    if(head==NULL)
    {
        head=new node;
        cin>>head->rollno;
        cin>>head->name;
        cin>>head->mark1;
        cin>>head->mark2;
        cin>>head->mark3;

        head->next=NULL;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=new node;
            cin>>q->rollno;
            cin>>q->name;
            cin>>q->mark1;
            cin>>q->mark2;
            cin>>q->mark3;
            q->next=NULL;
            p->next=q;
    }

}
void print()
{
    node *p=head;
    while(p!=NULL)
    {
        cout<<p->name<<" "<<((p->mark1)+ (p->mark2) +(p->mark3))<<endl;
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