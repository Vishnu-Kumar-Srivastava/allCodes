//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node*q=head;
        Node*p=head;
        while(q->next!=NULL)
        {
            q=q->next;
            if(q->next!=NULL)
            {
                q=q->next;
            }
            p=p->next;
        }
        return(p->data);
    }
};
