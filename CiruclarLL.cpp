#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void insertatHead(node *&head, int val)
{
    node *n = new node();
    n->next = head;
    n->data = val;
    node *temp = head;
    if (head != NULL)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    else
    {
        n->next = n;
    }
    head = n;
}

void insertatTail(node *&head, int val)
{
    node *n = new node();
    node *temp = head;
    n->next = head;
    n->data = val;
    if (head != NULL)
    {
        // temp=temp->next;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    else
    {
        n->next = n;
    }
    // head = n;
}

void insertatIndex(node *&head, int val, int index)
{
    node *n = new node();
    node *temp = head;
    n->data = val;
    n->next = head;
    if (head != NULL)
    {
        int i = 0;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
    }
    else
    {
        n->next = n;
    }
}

void reverse(node *&head)
{
    // node* n = new node();
    if (head == NULL)
    {
        return;
    }
    node *curr = head;
    node *prev = NULL;
    node *nxt;
    do
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    } while (curr != head);
    head->next = prev;
    head = prev;
}

void display(node *head)
{
    node *temp = head;
    // temp = temp->next;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout << "NULL" << endl;
    }
}

int main()
{
    node *head = NULL;
    insertatHead(head, 5);
    insertatHead(head, 4);
    insertatHead(head, 3);
    insertatHead(head, 2);
    cout<<"The original circular list:"<<endl;
    display(head);
    cout<<"inserting ele at the tail : "<<endl;
    insertatTail(head, 1);
    display(head);
    cout<<"circular list after insertion is:"<<endl;
    insertatIndex(head, 69, 2);
    display(head);
    cout << "reverse: " << endl;
    reverse(head);
    display(head);

    return 0;
}