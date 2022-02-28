
// Code to convert into uppercase.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str = "SaBir";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') // we are using the ascii values
        {
            str[i] -= 32; // the difrence between (upper case - lower case) = 32
        }
    }
    cout << str << endl;

    // to convert into smaller case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    // inbuilt methid to capitalize
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    // inbuilt methid to decapitalize
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    // to sort in descending order
    string s = "655464864843864";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    
    return 0;
}