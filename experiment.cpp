// // Question 1
// //  Creating  bank account class
// #include <iostream>
// using namespace std;
// class BankAccount
// {
// private:
//     string name;
//     int account_number;
//     string account_type;
//     int balance = 500;
//     int deposit;
//     int withdraw;

// public:
//     BankAccount()
//     {
//         // default constructor
//     }
//     BankAccount(string name, int account_number, string account_type, int balance)
//     {
//         cout << "Name: " << this->name << endl
//              << " Account Number: " << this->account_number
//              << "account_type: " << this->account_type << endl
//              << "balance: " << balance << endl;
//     }

//     void getinput()
//     {
//         cout << "Enter name: " << endl;
//         cin >> name;

//         cout << "Enter account_number: " << endl;
//         cin >> account_number;

//         cout << "enter account_type : " << endl;
//         cin >> account_type;
//     }

//     void deposit_amt()
//     {
//         cout << "enter the amount to be deposited : " << endl;
//         cin >> deposit;

//         balance += deposit;
//     }

//     void withdraw_amt()
//     {

//         cout << "enter the amount to be withdrawn : " << endl;
//         cin >> withdraw;
//         if (withdraw > balance)
//         {
//             cout << "Not enough fund available to withdraw ! " << endl;
//         }
//         else
//         {
//             balance -= withdraw;
//             cout << "the amount  left after withdrawal is : " << balance << endl;
//         }
//     }

//     void display()
//     {
//         cout << "the infromation about the customer: " << endl;
//         cout << "name: " << name << endl;
//         cout << "balance: " << balance;
//     }
// };

// int main()
// {
//     BankAccount b;
//     b.getinput();
//     b.deposit_amt();
//     b.withdraw_amt();
//     b.display();

//     return 0;
// }

// Q2 Guess the number
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int random(int start, int end)
{
    srand((unsigned) time(0));
    int random = start + ((rand()) % end + 1);
    return random;
}
int main()
{
    cout << "Welcome to the guess game" << endl;
    int start, end;
    cout << "enter start: ";
    cin >> start;
    cout << "enter end : ";
    cin >> end;
    int ran = random(start, end);
    cout<<ran<<endl;
    int guess, wrongcount = 0;
    

    do
    {

        cout<<"Enter the guess number: ";
        cin>>guess;
        if (guess < ran)
        {
            cout << "oops wrong answer!!!" << endl;
            cout << "The answer is a bit higher." << endl;
            wrongcount += 1;
        }
        else if  (guess > ran)
        {
            cout << "The answer is bit lower !!!" << endl;
            wrongcount += 1;
        }
        else
        {
            cout << "YAY correct answer!!!" << endl;
            
        }
    } while (guess != ran);

        cout<<"As you have found the right answer the game is finished!"<<endl;
        cout << "Hope you enjoyed the game !!!";
        char response[2], Q;

        cout << "chosse Q to quit" << endl;
       
        cout << "response : " << endl;
        cin >> response;
        if (response[0] == Q)
        {
            cout << "Quiting the game ";
            exit;
        }
        
    


return 0;
}