// / Q4
// Develop a program which will read a string and rewrite it in the
// alphabetical order. For example, the word STRING should be written as
// GINRST
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void SortStirng(string str)

{
   sort(str.begin(), str.end());
   cout << str;
}

int main(){
    string s = "STRING";
    SortStirng(s);
     return 0;
}

// ANOTHER SOLUTION USING VECTORS AND TEMPLATES FOR

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
template <typename T>

void outputVector(vector<T> &v)
{
    for (const auto &i : v)
    {
        cout << i << "-" << endl;
    }
    cout << endl;
}

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
