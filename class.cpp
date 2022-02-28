// #include<iostream>
// using namespace std;

// class employee
// {
// private:
//     int salary , bonus ;
// public:
//     int parkinlot , desno ;
//     void setdata(int val1 ,int val2);
//     void getdata(){
//         cout<<"the salary of employee is :  "<<salary<<endl;
//         cout<<"the bonus given to employee is :  "<<bonus<<endl;
//         cout<<"the parkinglot  no. of employee is :  "<<parkinlot<<endl;
//         cout<<"the desk number of employee is :  "<<desno<<endl;

//     }

// };
// void employee :: setdata(int val1 , int val2){
//     salary = val1;
//     bonus  = val2;

// }

// int main(){
//     employee sam;
//     // sam.salary = 150000; this is not correct because it is a private segment of a func only the public elemnts can be changed
//     sam.parkinlot = 55;
//     sam.desno = 7;
//     sam.setdata(10000000,25000);
//     sam.getdata();
//     return 0;
// }

// NESTED LOOPS IN C++
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void check_bin(void);
    void replacing_0_with_1(void);
    void displaying_bin(void);
};

void binary ::read(void)
{

    cout << "entrer the number :" << endl;
    cin >> s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "it is not  binary" << endl;
            exit(0);
        }
    }
}
void binary ::replacing_0_with_1(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1'; // single "=" is used to assign the value
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::displaying_bin(void)
{
    cout << "displaying the string ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary bn;
    bn.read();
    bn.check_bin();
    bn.displaying_bin();
    bn.replacing_0_with_1();
    bn.displaying_bin();
    return 0;
}