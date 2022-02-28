
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string str = "Hey this is done using file CLass in c++";
    ofstream out("sample.txt");
    out << str;

    // reading from a   file:
    //  string st2;
    //  ifstream in("sample2.txt"); //Read operation
    //  // in>>st2; // this will only give u a single word
    //  getline(in, st2);
    //  cout<<st2;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     return 0;
// }