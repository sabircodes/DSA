
// #include<iostream>
// using namespace std;
// // /the program will throw an error because const value  can not be changed
// int main(){
//     const int a = 10;
//     cout<<"the value of a : "<<a<<endl;
//     int a = 98;
//     cout<<"the value of new a : "<<a<<endl;

//     return 0;
// }
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a=2 ,b=3;
//     cout<<"the value of a : "<<a<<endl;
//     cout<<"the value of a : "<<a<<endl;

//     cout<<"the value of a : "<<setw(4)<<a<<endl;
//     cout<<"the value of b : "<<setw(4)<<b<<endl;


//     return 0;
// }
// "setw()" is a part of <iomanip> library it just like using a  tab , setw() will insert a tab it will take a desired integer value of your choice






//multiplicatin table of any desired number:
// #include<iostream>
// using namespace std;
// int main(){
//     int i  , j ;
//     cout<<"enter the value of j: "<<endl;
//     cin>>j;
//     while (i<10)
//     {
//         cout<<"the multiplication table is :"<<(i+1)*j<<endl;
//         i++;
//     }
    

//     return 0;
// }






//Code below is the way to implement insertion sort on al inked using a vector
// ListNode* curr=head;
//         vector<int>v;
//         ListNode* temp=head;
//         while(temp!=NULL)
//         {
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
//         int n=v.size();
//         for(int i=1;i<n;i++)
//         {
//             int j=i-1;
//             int t=v[i];
//             while(j>=0 && v[j]>t)
//             {
//                 v[j+1]=v[j];
//                 j--;
//             }
//             v[j+1]=t;
//         }
//         for(int i=0;i<n;i++)
//         {
//             curr->val=v[i];
//             curr=curr->next;
//         }
//         return head;
//     }

//array of linked list 
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        node(int val){
            data=val;
            next = NULL;
        }
};
int main(){

    int size = 10 ;
    //pointer to pointer  array
    node**head = new node*[size];


    //initializing array to NULL
    for(int i=0; i<size; i++){
        *(head+i) =NULL;

    }

    //traverse the  pointer array
    for(int i=0; i<size; i++){
        node*prev = NULL;
        int s = 4 ;
        while(s--){
        node*newnode = new node(i*s);
        
        if(*(head+i) == NULL){
            *(head+i) =newnode;

        }
        else{
            prev->next = newnode;

        }
        prev=newnode;
        }
    }

    for(int i=1; i<size; i++){
        node*temp = *(head+i);
        cout<<i<<"--> \t";
        //traversing through the linked list
        while(temp){
            cout<<temp->data << "->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }


     return 0;
}
