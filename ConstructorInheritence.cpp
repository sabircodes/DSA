#include <iostream>
using namespace std;

class base1
{
    int data;

public:
    base1(int i)
    {
        data = i;
        cout << "Base1 constructor is called "<<endl;
    }
    void prindataBase1()
    {
        cout << "The value of the data1 parameter is : " << data << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 constructor is called "<<endl;
    }
    void prindataBase2()
    {
        cout << "The value of the data2 parameter is : " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived constructor is called "<<endl;
    }
    void printderived(){
        cout<<"The valued of drived1 is : "<<derived1<<endl;
        cout<<"The valued of drived2 is : "<<derived2<<endl;

    }
};

int main()
{
    derived sam(1,2,3,4);
    sam.prindataBase1();
    sam.prindataBase2();
    sam.printderived();
    return 0;
}