// #include <iostream>
// #include <stdlib.h>
// #define n 10

// using namespace std;

// class DualStacks {
// 	int arr[n];
// 	int size;
// 	int top1, top2;

// public:
// 	DualStacks(int x) 
// 	{
// 		size = x;
// 		top1 = -1;
// 		top2 = size;
// 	}

// 	// Method to push an element x to stack1
// 	void push1(int x)
// 	{
// 		// There is at least one empty space for new element
//         cout<<"psuhing element "<<" "<<x<<" "<<"in stack1 "<<endl;
// 		if (top1 < top2 - 1) {
// 			top1++;
// 			arr[top1] = x;
// 		}
// 		else {
// 			cout << "Stack Overflow";
// 			return ;
// 		}
// 	}

// 	// Method to push an element x to stack2
// 	void push2(int x)
// 	{
// 		// There is at least one empty
// 		// space for new element
//         cout<<"psuhing element  "<<" "<<x<<" "<<"in stack2 "<<endl;
// 		if (top1 < top2 - 1) {
// 			top2--;
// 			arr[top2] = x;
// 		}
// 		else {
// 			cout << "Stack Overflow";
// 			return;
// 		}
// 	}

// 	// Method to pop an element from first stack
// 	int pop1()
// 	{
// 		if (top1 >= 0) {
// 			int x = arr[top1];
// 			top1--;
// 			return x;
// 		}
// 		else {
// 			cout << "Stack UnderFlow";
// 			exit(1);
// 		}
// 	}

// 	// Method to pop an element from second stack
// 	int pop2()
// 	{
// 		if (top2 < size) {
// 			int x = arr[top2];
// 			top2++;
// 			return x;
// 		}
// 		else {
// 			cout << "Stack UnderFlow";
// 			exit(1);
// 		}
// 	}


//     void isempty(){
//         if(top1==-1 && top2 == size){
//             cout<<"The stack is empty";

//         }
//         else{
//             cout<<"The stack is  not  empty"<<endl;
//         }
        

//     }

//     void isfull(){
//         if(top1>=top2){
//             cout<<"The stack is full"<<endl;
//         }
//         else{
//             cout<<"The stack is not full "<<endl;
//         }
//     }
// };


// int main()
// {
// 	DualStacks ts(5);
// 	ts.push1(12);
// 	ts.push2(11);
// 	ts.push2(15);
// 	ts.push1(20);
// 	ts.push2(7);
// 	cout << "Popped element from stack1 is "<<ts.pop1()<< endl;
//         cout<<endl;
// 	ts.push2(40);
// 	cout << "\nPopped element from stack2 is "<< ts.pop2()<< endl;
//     ts.isempty();
//     ts.isfull();
// 	return 0;
// }



