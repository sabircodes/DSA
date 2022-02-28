#include <iostream>
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
int length(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


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
node* reversekgroup(node* head, int k)
{
    // base case
    if (head==NULL){
        return NULL;
    }
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;
 
    if(length(current) >=k) {
            while(current!=NULL && count<k) {
               next= current->next;
               current->next= prev;
               prev=current;
               current=next;
               count++;
           }
        if(head!=NULL) {
            head->next = reversekgroup(next,k);
         }
        } 
        else {
            prev=head;
        }
        
        return prev;
        
    }

int main()
{
    node * head = NULL;
    insertatTail(head, 1);
    insertatTail(head, 2);
    // insertatTail(head, 3);
    // insertatTail(head, 4);
    // insertatTail(head, 5);
    display(head);
    
    head=reversekgroup(head,3);
    display(head);
    return 0;
}