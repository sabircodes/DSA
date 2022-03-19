#include <iostream>
using namespace std;
#define max 100
class DEQueue
{
private:
    int arr[max]; // intializing an array  of size max
    int size;
    int front;
    int rear;

public:
    DEQueue(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }

    void insertFront(int val);
    void insertRear(int val);
    void delteFront();
    void delteRear();
    bool isfull();
    bool isempty();
    int getFront();
    int getRear();
};

bool DEQueue ::isfull()
{
    if ((front == 0 && rear == size - 1) || front == rear + 1)
    {
        return true;
    }
    else
        return false;
}

bool DEQueue ::isempty()
{
    return (front == -1);
}

void DEQueue ::insertFront(int val)
{
    // cout<<"inserting at fornt: ";
    if (isfull())
    {
        cout << "The queue is full !" << endl;
    }
    if (isempty())
    {
        front = 0;
        rear = 0;
    }

    else if (front == 0)
    {
        front = size - 1;
    }

    else
        front--;

    arr[front] = val;
}

void DEQueue ::insertRear(int val)
{
    // cout << "inserting at Rear : ";
    if (isfull())
    {
        cout << "The queue is full" << endl;
    }
    if (isempty())
    {
        front = 0;
        rear = 0;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
        rear++;
    arr[rear] = val;
}

void DEQueue ::delteFront()
{
    // cout<<"Deleting from front ";
    if (isempty())
    {
        cout << "Empty !!" << endl;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else

        if (front = size - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}
void DEQueue ::delteRear()
{
    // cout<<"Deleting from Rear ";

    if (isempty())
    {
        cout << "Empty !!" << endl;
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else

        if (rear == 0)
    {
        rear = size - 1;
    }
    else
    {
        rear--;
    }
}

int DEQueue ::getFront()
{
    if (isempty())
    {
        cout << 'Empty!!' << endl;
        return -1;
    }
    // cout<<"element at front:  "<<endl;
    return arr[front];
}
int DEQueue ::getRear()
{
    if (isempty() || rear < 0)
    {
        cout << 'Empty!!' << endl;
        return -1;
    }
    // cout<<"elemnt at Rear : "<<endl;
    return arr[rear];
}

int main()
{
    DEQueue dq(5); // making a deque of size 5;
    cout << "Insert element at rear end  : 5 \n";
    dq.insertRear(5);

    cout << "insert element at rear end : 10 \n";
    dq.insertRear(10);

    cout << "get rear element "
         << " "
         << dq.getRear() << endl;

    dq.delteRear();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;

    cout << "inserting element at front end \n";
    dq.insertFront(15);

    cout << "get front element "
         << " "
         << dq.getFront() << endl;

    dq.delteFront();

    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;
    return 0;
}