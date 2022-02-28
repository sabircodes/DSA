// // #include<iostream>
// // using namespace std;
// // #define MAX_SIZE 101
// // class Queue{
// //     private:
// //         int arr[MAX_SIZE];
// //         int front,rear;
// //     public:
// //         Queue(){
// //             this->front = -1;
// //             this->rear = -1;
// //         }
// //         bool isempty(){
// //             if(front == -1 && rear == -1){
// //                 return true;

// //             }
// //             else{
// //                 // cout<<"The Queue is not empty"
// //                 return false;
// //             }
// //         }

// //         bool isfull(){
// //             return (rear+1)%MAX_SIZE == front ? true : false;
// //         }
// //         void enqueue(int val){
// //             if(isfull()){
// //                 cout<<"The Queue is full.\n";
// //                 return;
// //             }
// //             else if(isempty()){
// //                 rear=0;
// //                 front=0;

// //             }
// //             else{
// //                 rear=(rear+1)%MAX_SIZE;
// //             }
// //             arr[rear]=val;

// //         }

// //         void dequeue(){
// //             if(isempty()){
// //                 cout<<"The Queue is empty.\n";
// //                 return;
// //             }
// //             else if(front==rear){
// //                 front=-1;
// //                 rear=-1;

// //             }
// //             else{
// //                 front=(front+1)%MAX_SIZE;
// //             }
// //         }

// //         int Front(){
// //             if(front==-1){
// //                 cout<<"The Queue os empty.\n";
// //             }
// //             else{
// //                 cout<<endl;
// //                 cout<<arr[front];
// //             }
// //         }

// //         void print(){
// //             int count = (rear+MAX_SIZE-front)%MAX_SIZE;
// //             for(int i = 0 ; i <= count ; i++){
// //                 int index = (front+i)%MAX_SIZE;
// //                 cout<<arr[index]<<" ";
// //             }
// //             cout<<endl;
// //         }

// // };
// // int main(){
// //     Queue q1;
// //     q1.enqueue(1);
// //     q1.enqueue(2);
// //     q1.enqueue(3);
// //     q1.enqueue(4);
// //     q1.enqueue(5);
// //     q1.dequeue();
// //     q1.dequeue();
// //     q1.isempty();
// //     q1.Front();
// //     q1.print();

// //      return 0;
// // }
// #include<iostream>
// using namespace std;
// #define MAX_SIZE 101  //maximum size of the array that will store Queue.

// // Creating a class named Queue.
// class Queue
// {
// private:
// 	int A[MAX_SIZE];
// 	int front, rear;
// public:
// 	// Constructor - set front and rear as -1.
// 	// We are assuming that for an empty Queue, both front and rear will be -1.
// 	Queue()
// 	{
// 		front = -1;
// 		rear = -1;
// 	}

// 	// To check wheter Queue is empty or not
// 	bool IsEmpty()
// 	{
// 		return (front == -1 && rear == -1);
// 	}

// 	// To check whether Queue is full or not
// 	bool IsFull()
// 	{
// 		return (rear+1)%MAX_SIZE == front ? true : false;
// 	}

// 	// Inserts an element in queue at rear end
// 	void Enqueue(int x)
// 	{
// 		cout<<"Enqueuing "<<x<<" \n";
// 		if(IsFull())
// 		{
// 			cout<<"Error: Queue is Full\n";
// 			return;
// 		}
// 		if (IsEmpty())
// 		{
// 			front = rear = 0;
// 		}
// 		else
// 		{
// 		    rear = (rear+1)%MAX_SIZE;
// 		}
// 		A[rear] = x;
// 	}

// 	// Removes an element in Queue from front end.
// 	void Dequeue()
// 	{
// 		cout<<"Dequeuing \n";
// 		if(IsEmpty())
// 		{
// 			cout<<"Error: Queue is Empty\n";
// 			return;
// 		}
// 		else if(front == rear )
// 		{
// 			rear = front = -1;
// 		}
// 		else
// 		{
// 			front = (front+1)%MAX_SIZE;
// 		}
// 	}
// 	// Returns element at front of queue.
// 	int Front()
// 	{
// 		if(front == -1)
// 		{
// 			cout<<"Error: cannot return front from empty queue\n";
// 			return -1;
// 		}
// 		return A[front];
// 	}
// 	/*
// 	   Printing the elements in queue from front to rear.
// 	   This function is only to test the code.
// 	   This is not a standard function for Queue implementation.
// 	*/
// 	void Print()
// 	{
// 		// Finding number of elements in queue
// 		int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
// 		cout<<"Queue       : ";
// 		for(int i = 0; i <count; i++)
// 		{
// 			int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
// 			cout<<A[index]<<" ";
// 		}
// 		cout<<"\n\n";
// 	}
// };
// int main()
// {
// 	/*Driver Code to test the implementation
// 	  Printing the elements in Queue after each Enqueue or Dequeue
// 	*/
//    Queue Q; // creating an instance of Queue.
//    Q.Enqueue(2);  Q.Print();
//    Q.Enqueue(4);  Q.Print();
//    Q.Enqueue(6);  Q.Print();
//    Q.Dequeue();	  Q.Print();
//    Q.Enqueue(8);  Q.Print();
// }

// Linked List implmentation of Queue
#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void Enqueue(int val)
{
	cout<<"Enqueuing the elment: "<<" ";
	Node *n = new Node();
	n->data = val;
	n->next = NULL;
	if (front == NULL && rear == NULL)
	{
		front = rear = n;
		return;
	}
	rear->next = n;
	rear = n;
}

void dequeue()
{	
	cout<<"Dequeueing the element : "<<" ";
	Node *temp = front;
	if (front == NULL && rear == NULL)
	{
		cout << "The Queue is empty!" << endl;
		return;
	}
	if (front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	delete (temp);
}

void Front(){
	if(front==NULL){
		return;
	}
	else{
		cout<<"the element in front is : "<<" ";
		cout<<front->data;
	}
	cout<<endl;
}


bool isempty(){
	if(front==NULL && rear==NULL){
		cout<<"The queue is empty"<<endl;
		return true;
	}
	else{
		cout<<"The queue is  not empty"<<endl;
		return false;
	}
}
void display(){
	Node* temp = front;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	Enqueue(2); display();
	Enqueue(3); display();
	Enqueue(4); display();
	Enqueue(5); display();
	Enqueue(6); display();
	dequeue();display();
	Front();
	isempty();

	return 0;
}