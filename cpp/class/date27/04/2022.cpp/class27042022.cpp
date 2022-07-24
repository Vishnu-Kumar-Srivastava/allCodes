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
node *head= NULL;//a pointer that is not pointing to any memory location.
node *second = NULL;
node *third= NULL;
int main()
{
    // 3 steps
    // 1. Allocate the memory.
    // 2. read the data item.
    // 3. Save the address field.
    head= new node;
    second =new node;
    third=new node;// allocates the 4 bytes memory ...two for for item ,two for memory.
    //head is pointing towards this new node i.e. address of new node is in the address location of head.
    //to access we use node->item(because it is a pointer) and node->next
    cin>>head->item;
    cin>>second->item;
    cin>>third->item;
    head->next=second;
    second->next=third;
    third->next=NULL;
    cout<<head->item<<endl;
    cout<<second->item<<endl;
    cout<<third->item;

    

}
//struct info
//{
  //  char name[30];
  //  int rool no.;
  //  int age;
//}object1;


