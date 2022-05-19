#include <iostream>
using namespace std;
#define MAX_SIZE 100
// to solve this problem we can design a queue  data structure in which diffrent user can give a command to print the file
// which will be queued and will work on first come first serve basis or FIFO

// here i will be doing a array implementation because the number of employess working on same computer wont be to large
class PrintQueue
{
    int front;
    int rear;
    int command[MAX_SIZE];

public:
    PrintQueue()
    {
        front = -1;
        rear = -1;
    }

    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            // cout << "No print commad in Queue " << endl;
            return true;
        }
        return false;
    }

    bool isfull()
    {
        if ((rear + 1) % MAX_SIZE == front)
        {
            return true;
        }
        return false;
    }

    void enque_command(int employee)
    {
        cout << "enqueing" <<" "<<employee << endl;
        if (isfull())
        {
            cout << "The queue is full ... please try later!" << endl;
        }
        if (isempty())
        {
            front = 0;
            rear = 0;
        }

        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        command[rear] = employee;
    }
    void dequeue_command()
    {
        cout << "printing the page " << endl;
        if (isempty())
        {
            cout << "No command in Queue" << endl;
        }
        //if in case there is only one command in queue
        if (front == rear)
        {
            front = rear = -1;
        }
        else{
            //move front
            front = (front+1)%MAX_SIZE;
        }
    }

    void display()
	{
		// Finding number of elements in queue
		int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
			cout<<command[index]<<" ";
		}
		cout<<"\n\n";
	}
};



int main()
{

   PrintQueue Q; // creating an instance of Queue.
   // five user gave command to print 
   Q.enque_command(1);  Q.display();
   Q.enque_command(2);  Q.display();
   Q.enque_command(3);  Q.display();
   Q.enque_command(4);	Q.display();
   Q.enque_command(5);  Q.display();
     cout<<"printer printing the forst in line : "<<endl;
   Q.dequeue_command();
   Q.dequeue_command();

    cout<<"queue after printing two files" <<endl;
   Q.display();

    return 0;
}