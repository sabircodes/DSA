// OVERLOADING (+) OPERATOR

#include <iostream>
using namespace std;
class complex
{

public:
    int real;
    int img;

    complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }

    complex operator+(complex x) //format for operator overloading
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    complex c1(3, 5);
    complex c2(5, 4);

    complex c3;
    c3 = c1 + c2;
    cout << "real : " << c3.real << endl;
    cout << "imag : " << c3.img << endl;
    cout << "ans : " << c3.real << "+"
         << "i" << c3.img << endl;

    return 0;
}

