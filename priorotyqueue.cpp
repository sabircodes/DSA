//IMPLEMTING PRIORITY QUEUE USING LINKED LIST .
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    int priority;
    node* next ;
    
};

node*newnode(int val , int p ){
    node*temp = new node();
    temp->data = val;
    temp->priority = p;
    temp->next = NULL;

    return temp;

}

int peek(node *&head){
    return head->data;
}

void pop(node *&head){
    node* temp = head;
    head= head->next;
    delete(temp);

}

void push(node *&head , int d , int p){
    node *curr = head;
    node* temp = newnode(d, p);
    // if : Node to be iserted is having a lower value than head , htne make the new node the new node
    if(head->priority > p){
        temp->next = head;
        head=temp;
    }

    else{
        while(curr->next !=NULL && curr->next->priority < p){
            curr= curr->next;
        }
        temp->next =curr->next;
        curr->next=temp;
    }

}

int isempty(node *&head){
    return(head== NULL);
}

void display(node *&head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head = newnode(4,1);
    push(head , 5, 2);
    push(head , 6, 3);
    push(head , 7, 0);
    display(head);
    cout<< peek(head);
    // push(head , 5, 2);


     return 0;
}