//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node*p=head;
        Node*q=head;
        while(p!=q)
        {
            q=q->next;
            if(q->next==NULL)
            {
                return(false);
            }
            q=q->next;
            if(q->next==NULL)
            {
                return(false);
            }
            p=p->next;

        }
        return(true);
    }
};