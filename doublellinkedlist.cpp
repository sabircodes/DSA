#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int a)
    {
        data = a;
        next = NULL;
        prev = NULL;
    }
};

void insertathead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    head->prev = n; // the prev pointer of head node will point at n ,
    n->next = head; // the next node of n will point at head.
    head = n;       // and n will become head.
}

void insertattail(node *&head, int val)
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

// void reverse(node* head){

// }
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
// void reverse(node *&head)
// {
//     node *curr ,*nxt;
//     curr = head;
//     node*prv = NULL;
//     while (curr != NULL)
//     {
//         nxt = curr->next;
//         curr->next = prv;
//         prv = curr;
//         curr = nxt;
//     }
//     head = prv;
// }

// void reverse(node* head)
// {
//     node *temp = NULL;
//     node *curr = head;
//     while (curr != NULL)
//     {
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//     }

//     if (temp != NULL)
//     {
//         head = temp->prev;
//     }

// }

void display(node *head)
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
    insertattail(head, 5);
    insertattail(head, 4);
    insertattail(head, 3);
    insertattail(head, 2);
    insertattail(head, 1);
    insertathead(head, 6);
    display(head);

    // reverse(head);
    // display(head);

    return 0;
}