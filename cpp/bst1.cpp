//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct node{
    int data; 
    struct node*left;
    struct node*right;
};
node*root=NULL;
void create(int x)
{
    if(root==NULL)
    {
        root=new node;
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        
      
    }
    else if(x>(root->data))
    {
        if(root->right==NULL)
    {
        node*t=root;
        node*q=new node;
        q->left=NULL;
        q->right=NULL;
        q->data=x;
        t->right=q;
    }
        else if(root->right!=NULL)
    {
        node*t=root;
        node*r=root->right;
        while((x>(t->data)) && t->right!=NULL)
        {
            t=t->right;
            

        }
        if(x>t->data)
        {
            node*q=new node;
            q->left=NULL;
            q->right=NULL;
            q->data=x;
            t->right=q;
        }
        else
        {
            node*q=new node;
            q->left=NULL;
            q->right=NULL;
            q->data=x;
            t->left=q;
        }
        }

       
    
    }
    
    
    
    
    else
    {
        node*t=root;
       
        while((x<t->data) && t->left!=NULL)
        {
            t=t->left;
         

        }
        if(x<t->data)
        {
            node*q=new node;
            q->left=NULL;
            q->right=NULL;
            q->data=x;
            t->left=q;
        }
        else
        {
            node*q=new node;
            q->left=NULL;
            q->right=NULL;
            q->data=x;
            t->right=q; 
        }
    }

    
}
void print()
{
    node *p=root;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->left;

    }

    cout<<endl;
}
void inorder()
{
    node*p=root;
    node*q=root;
   while((((p->left->left==NULL) && (p->left->right==NULL) )&&( (p->left->left==NULL) && (p->left->right==NULL) )) || ((p->right->left==NULL) && (p->right->right==NULL)) || (((q->left->left==NULL) && (q->left->right==NULL) )&&( (q->left->left==NULL) && (q->left->right==NULL) )) ||( (q->right->left==NULL) && (q->right->right==NULL)))
   {
    cout<<p->left->data<<" ";
    cout<<p->left->right->data;

    p=p->left;
   }

}
int main()
{
create(5);
create(6);
create(7);
create(8);
create(4);
create(2);
create(1);
create(3);



print();

}