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
// #include <iostream>
// #include <cstdlib>
// #include <time.h>
// using namespace std;
// int random(int start, int end)
// {
//     srand((unsigned) time(0));
//     int random = start + ((rand()) % end + 1);
//     return random;
// }
// int main()
// {
//     cout << "Welcome to the guess game" << endl;
//     int start, end;
//     cout << "enter start: ";
//     cin >> start;
//     cout << "enter end : ";
//     cin >> end;
//     int ran = random(start, end);
//     cout<<ran<<endl;
//     int guess, wrongcount = 0;

//     do
//     {

//         cout<<"Enter the guess number: ";
//         cin>>guess;
//         if (guess < ran)
//         {
//             cout << "oops wrong answer!!!" << endl;
//             cout << "The answer is a bit higher." << endl;
//             wrongcount += 1;
//         }
//         else if  (guess > ran)
//         {
//             cout << "The answer is bit lower !!!" << endl;
//             wrongcount += 1;
//         }
//         else
//         {
//             cout << "YAY correct answer!!!" << endl;

//         }
//     } while (guess != ran);

//         cout<<"As you have found the right answer the game is finished!"<<endl;
//         cout << "Hope you enjoyed the game !!!";
//         char response[2], Q;

//         cout << "chosse Q to quit" << endl;

//         cout << "response : " << endl;
//         cin >> response;
//         if (response[0] == Q)
//         {
//             cout << "Quiting the game ";
//             exit;
//         }

// return 0;
// }

// Q3
// Acc, sav-acc, curr-acc;
//  #include<iostream>
//  #include <bits/stdc++.h>
//  using namespace std;
//  class Account{
//      private:
//      string name;
//      int account_number;
//      string account_type; //user have teo options saving and current
//      public:
//      void entry(){
//          cout<<"Enter your bank details here:"<<endl;
//          cout<<"Enter name"<<endl;
//          cin>>this->name;
//          cout<<"Enter account_number"<<endl;
//          cin>>this->account_number;
//          cout<<"Enter account_type"<<endl;
//          cin>>this->account_type;
//      }
//      void display(){
//          cout<<"Name: "<<this->name<<endl;
//          cout<<"Account Number: "<<this->account_number<<endl;
//          cout<<"Account Type: "<<this->account_type<<endl;
//      }
//  };

// class SavingAccount : public Account{
//     public:
//     void chequeBook(){
//         cout<<"SAving account holder does not have chequebook facility available"<<endl;
//     }
//     int money;
//     int balance = 0; //intializing balance to have zero rupees in a saving account.
//     void deposit(){
//         cout<<"Welcome to your savings account  "<<endl;
//         cout<<"Enter amount : "<<endl;
//         cin>>money;
//         balance+=money;
//         cout<<"balance: "<<balance<<endl;

//     }

//     void CPI(){

//     double principle = balance , rate = 5 , time;
//     cout<<"enetr time : "<<endl;
//     cin>>time;

//     /* Calculate compound interest */
//     double A = principle * (pow((1 + rate / 100), time));
//       double CI = A- principle;

//     // cout << "Compound interest is " << CI;
//         cout<<"Amount after apllying comppund intresRate of 4 : "<< CI<<endl;
//     }

//     void withdraw(int input){
//         cout<<"withdrawal in process.... "<<endl;
//         if(input<balance){
//             balance -=input;
//             cout<<"remaining funds in account: "<<balance<<endl;
//         }
//         else{
//             cout<<"ERROR!!"<<endl;
//             cout<<"insufficient funds!!"<< endl;
//         }

//     }

// };

// class currentAccount : public Account{
//     public :
//         int balance = 0 ;
//         int money;
//         void deposit(){
//               cout<<"Welcome to your current account  "<<endl;
//         cout<<"Enter amount : "<<endl;
//         cin>>money;
//         balance+=money;
//         cout<<"balance: "<<balance<<endl;

//         }
//         void withdraw(int input){
//             cout<<"withdrawing in process..."<<endl;
//             if(input<balance){
//             balance -=input;
//             cout<<"remaining funds in account: "<<balance<<endl;
//         }
//         else{
//             cout<<"ERROR!!"<<endl;
//             cout<<"insufficient funds!!"<< endl;
//         }

//         }

//         void minbalance(){
//             if(balance<10000){
//                 cout<<"it is below minimum balance as per the rules of the bank amount will be deducted."<<endl;
//                 balance-=25;
//                 cout<<"balance after penality : "<<balance<<endl;
//             }
//             else{
//                 cout<<"the condition is fullfilled."<<endl;
//             }
//         }
//         void chequeBook(){
//         cout<<"current account holder can order chequebook by contacting the bank"<<endl;
//     }

// };
// int main(){
//     // SavingAccount s;
//     // s.entry();
//     // s.deposit();
//     // s.CPI();
//     // s.withdraw(500);
//     cout<<"Curent Account activated.."<<endl;
//     currentAccount c;
//     c.entry();
//     c.deposit();
//     cout<<"withdrawl window : "<<endl;
//     c.withdraw(2000);
//     c.minbalance();
//      return 0;
// }

// Q4
// Develop a program which will read a string and rewrite it in the
// alphabetical order. For example, the word STRING should be written as
// GINRST
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// void SortStirng(string str)

// {
//    sort(str.begin(), str.end());
//    cout << str;
// }

// int main(){
//     string s = "STRING";
//     SortStirng(s);
//      return 0;
// }

//ANOTHER SOLUTION USING VECTORS AND TEMPLATES FOR

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;
// template <typename T>

// void outputVector(vector<T> &v)
// {
//     for (const auto &i : v)
//     {
//         cout << i << "-" << endl;
//     }
//     cout << endl;
// }



// int main()
// {
//     vector<string> v1 = {"STRING", "SABIR", "SUPERMAN"};
//     for (auto &i : v1)
//     {
//         sort(i.begin(), i.end());
//     }
//     outputVector(v1);
//     return 0;
// }