#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

class node
{
public:
    int data;
    node *next;

    node(int val) // Constructor
    {
        data = val;
        next = NULL;
    }
};

//1.Traversing of Linked list
void display(node *n)
{  
    cout<<"Printing the list :"<<endl;

    while(n!=NULL)
    {
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}
//Printing the List:
//1->2->3->NULL

//2.Insert Node at the front of the Linked List
void InsertAtFront(node *&head, int value)
{
    //1.Prepare a newNode
    node *newNode = new node(value);

    //2.Put it in front of current head
    newNode->next=head; 

    //3.Move head of the list to point to the newNode
    head = newNode;
}
//For example:
/*
10->NULL
10->1->2->3->NULL;
*/

//3.Insert Node at the End of the Linked List
void InsertAtEnd(node *&head, int value)
{
    //1.Prepare a newNode
    node *newNode = new node(value);

    //2.If linked list is empty ,newNode will be a head node.
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    //3.Find the last node
    node *last = head;
    while(last->next != NULL)
    {
        last = last->next;
    }

    //4.Insert newNode after last node(at the end)
    last->next = newNode;
}
//For example:
//100->NULL
//1->2->3->100->NULL

//Insert Node after a given node
void InsertAfterNode(node *prev, int value)
{
    //1.Check if previous node is NULL
    if(prev == NULL)
    {
        cout<<"Previous can not be null";
        return;
    }

    //2.Prepare a Newnode.
    node *newnode = new node(value);
    
    //3.Insert newNode after Previous
    newnode->next = prev->next;
    prev->next = newnode;
}
//for example:
//4->NULL
//1->2->4->3->NULL
//1->2->3->NULL

int main()
{
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);

    head->next = second; // Link first node with  the second node
    second->next = third;// Link second node with the third node
    //1->2->3->NULL

    //Fuction Call
    InsertAfterNode(second, 4);
    InsertAtEnd(head, 100);
    InsertAtFront(head, 10);
    display(head);
    
    return 0;
}