// #include<iostream>
// using namespace std;
// int main(){
//     int x  , y  , z ;
//     cout<<"Enter the x , y"<<endl;
//     cin>>x>>y;
//     try
//     {
//         if(y==0){
//             throw 101;
//         }
//         z= x/y;
//         cout<<"The value of z : "<<z<<endl;
//     }
//     catch(int e)
//     {
//         cout<<"Division error!!"<<"Error code: "<<e<<endl;
//     }
//     cout<<"bye"<<endl;

//     return 0;
// }

// EXCETION HANDELLING GOR STACK OVERFLOW AND SSTACKUNDERFLOW
#include <iostream>
using namespace std;
class stackoverflow : exception
{
};
class stackunderflow : exception
{
};
class stack
{
    int *stk;
    int top = -1;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int val)
    {
        
            if (top == size - 1)
            {
                throw stackoverflow();
                stk[top++] = val;
            }
        
       
    }

    int pop()
    {
        
            if (top == -1)
            {
                throw stackunderflow();
            }

            return stk[top--];
        
    }
};
int main()
{
    stack s(5);
    try
    {
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(8);
        s.push(5);
        s.push(56);        
        s.push(563);        
        s.push(561);        

        // cout<<"poping"<<endl;
        // s.pop();
        // s.pop();
        // s.pop();
        // s.pop();
        // s.pop();
        // s.pop();
    }
    catch(stackoverflow e)
    {
        cout<<"stack is completely filled!"<<endl;
    }
    catch(stackunderflow e){
        cout<<"stack is empty!"<<endl;
    }
    
    return 0;
}