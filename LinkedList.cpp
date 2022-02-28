#include <iostream>
#include<stack>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// inserting a node at head of list
void insertatHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// inseritn a node at the tail of list
void insertatTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// code to insert the number at desired index
void insertatIndex(node *&head, int val, int index)
{
    node *n = new node(val);
    node *temp = head;

    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
}

// deleting a node in linked list
void deleteNode(node *&head, int index)
{
    node *temp1 = head;
    if (index == 1)
    {
        head = temp1->next;
        delete (temp1);
        return;
    }

    int i = 0;
    while (i != index - 2)
    {
        temp1 = temp1->next;
        i++;
    }

    node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete (temp2);
}

// Reversing a linked list
void reverse(node *&head)
{
    node *curr, *prv, *nxt;
    curr = head;
    prv = NULL;
    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prv;
        prv = curr;
        curr = nxt;
    }
    head = prv;
}
// void reverse(node *&head)
// {
//     stack<class node *> st;
//     if (head == NULL)
//         return;
//     node *temp = head;
//     // filling up the stack with the  adress
//     while (temp != NULL)
//     {
//         st.push(temp);
//         temp = temp->next;
//     }

//     temp = st.top();
//     head = temp;
//     temp = temp->next;
//     while (!st.empty())
//     {
//         temp->next = st.top();
//         st.pop();
//         temp = temp->next;
//     }
// }
//reversing a list using recursion 
// void reverse(node *&head){
//     node * temp ;
//     if(temp->next=NULL){
//         temp=head;
//         return;
//     }
//     reverse(temp->next);
//     node* nxt = temp->next;
//     nxt->next=temp;
//     temp->next =NULL;
// }

// displaying a linked list
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertatTail(head, 0);
    insertatTail(head, 2);
    insertatTail(head, 5);
    insertatTail(head, 67);
    insertatTail(head, 788);
    insertatIndex(head, 69, 2);
    insertatHead(head, 1);
    // deleteNode(head, 6); // this will remove the 6ht element
    display(head);

    reverse(head);
    display(head);

    return 0;
}
