

// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // class Node
// // {
// // public:
// //     int data;
// //     Node *next;
    
// //     Node(int val)
// //     {
// //         data = val;
// //         next = NULL;
// //     }
// // };
// // void insert_head(Node *&head, int data)
// // {
// //     Node *new_node = new Node(data);
// //     new_node->next = head;
// //     head = new_node;
// // }

// // void display(Node *&head)
// // {
// //     Node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->data << "->";
// //         temp = temp->next;
// //     }
// //     cout << "Null" << endl;
// // }

// // void mergeList(Node *head1, Node *head2)
// // {

// //     if ((head1) == NULL or (head2) == NULL)
// //         return;
// //     Node *temp1 = head1;
// //     Node *temp2 = head2;
// //     Node *n1, *n2;
// //     Node *ret = temp1;
// //     if (!ret)
// //     {
// //         ret = temp2;
// //     }
// //     while (temp1 and temp2)
// //     {
// //         n1 = temp1->next;
// //         n2 = temp2->next;
// //         temp1->next = temp2;
// //         temp2->next = n1;
// //         temp1 = n1;
// //         temp2 = n2;
// //     }
// //     head2 = temp2;
// // }

// // int main()
// // {
// //     Node *head1 = NULL;
// //     insert_head(head1, 3);
// //     insert_head(head1, 7);
// //     insert_head(head1, 5);
// //     insert_head(head1, 1);
// //     cout << "First Linked List:\n";
// //     display(head1);

// //     Node *head2 = NULL;
// //     insert_head(head2, 4);
// //     insert_head(head2, 2);
// //     insert_head(head2, 10);
// //     insert_head(head2, 6);
// //     cout << "Second Linked List:\n";
// //     display(head2);

// //     mergeList(head1, head2);
// //     cout<<"After using mergin function : "<<endl;
// //     display(head1);
    

// //     return 0;
// // }





#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length , breadth;
    public:
    Rectangle(int l , int b){
        cout<<"Rectangle cunstructor invoked"<<endl;
        length=l;
        breadth=b;
    }

//to acces the private variable length
    int  rl(){
        return length;
    }
// to acces the private variable breadth
    int rb(){
        return breadth;
    }

    void perimeter(){
        cout<<"perimeter of rectangle"<<endl;
        cout<<"perimeter: "<<2*length*breadth<<endl;
    }

    void area(){
        cout<<"area of rectangle"<<endl;
        cout<<"area: "<<length*breadth<<endl;
    }
    ~Rectangle(){
        cout<<"Destroying rectangle..."<<endl;
    }

};



class  Cuboid  : public Rectangle{
    int height;
    public:
    Cuboid( int l ,int b , int h ) : Rectangle(l,b){
        cout<<"Cuboid constructor invoked"<<endl;
        height = h ;
    }

    void surfaceArea(){
        cout<<"Surface area: "<< 2*(rl()*rb() + rl()*height +  rb()*height)<<endl;
    }

    void voulme(){
        cout<<"Volume of cuboid : "<<rl()*rb()*height<<endl;
    }

    ~Cuboid(){
        cout<<"Destroying cuboid"<<endl;
    }


}; 
int main(){
    Cuboid c(2,3,4);
    c.surfaceArea();
    c.voulme();
    c.area();

     return 0;
}



