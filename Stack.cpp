//Array implementation
// #include <iostream>
// using namespace std;

// #define MAX_SIZE 101

// class Stack
// {
//     int arr[MAX_SIZE]; // array to store the stack
//     int top;

// public:
//     Stack()
//     {
//         top = -1;
//         // cout << "stack is empty" << endl;
//     }
//     void push(int val)
//     {
//         if (top == MAX_SIZE - 1)
//         {
//             cout << "Error: Stack is overloaded " << endl;
//             return;
//         }
//         // top=top+1;
//         // arr[top]=val;
//         arr[++top] = val;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty";
//         }

//         top--;
//     }

//     void Top()
//     {
//         cout<<endl<<arr[top]<<endl;
//     }

//     int empty()
//     {
//         if (top == -1){
//             return 1;
//         }
//         else{
//         return 0 ;
//         }
//     }

//     void display(){
//         for (int i = 0; i <=top; i++){
//             cout<< arr[i]<<" ";
//         }

//     }
// };
// int main()
// {
//     Stack s1;
//     s1.push(5);
//     s1.push(4);
//     // s1.pop();
//     s1.push(3);
//     s1.push(2);
//     s1.push(1);
//     // s1.empty();
//     s1.display();
//     s1.Top();
//     s1.display();
//     return 0;
// }

// //Linked list implementation

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

void push(node *&top, int val)
{
    node *n = new node(val);
    // node * temp = top;
    n->next = top;
    top = n;
}

void pop(node *&top){
    node * temp = top;
    if (top  == NULL) return;
    temp = top; // this is pointing to the node to be deleted
    top = top->next; // this is breaking the link of top with temp node and pointing to the next node
    delete(temp); // this will delete the temp node from the memory;

}
void Top(node *&top){
    node*temp = top;
    cout<<temp->data<<endl;
}
void display(node * top ){
    node *temp = top ;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void empty(node*&top){
    if(top==NULL){
        cout<<"True , The stack is empty"<<endl;
    }
    else{
        cout<<"False , the stack is not empty: "<<endl;
    }
}
int main()
{
    node * top = NULL;
    push(top,5);
    push(top,4);
    push(top,3);
    push(top,2);
    push(top,1);
    cout<<"Original "<<endl;
    display(top);
    pop(top);
    cout<<"Result after using pop:"<<endl;
    display(top);
    cout<<"top ele: "<<endl;
    Top(top);
    empty(top);
    return 0;
}

// #include<iostream>
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> st ;
//     st.push(5);
//     st.push(4);
//     st.push(3);
//     st.push(2);
//     st.push(1);
//     st.pop();
//     cout<<st.top()<<endl;
//     while(!st.empty()){
//         cout<<st.top()<<"->";
//         st.pop();
//     }

//     return 0;
// }

