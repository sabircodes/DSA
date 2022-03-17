#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isdigit(char a)
{
    if (a >= '0' && a <= '9')
    {
        return true;
    }
    return false;
}
bool isoperator(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return true;
    }
    return false;
}
int operation(char z, int operand1, int operand2)
{
    if (z == '+')
    {
        return operand1 + operand2;
    }
    if (z == '-')
    {
        return operand1 - operand2;
    }
    if (z == '*')
    {
        return operand1 * operand2;
    }
    if (z == '/')
    {
        return operand1 / operand2;
    }
    else {
        cout<<"An error occured !!";
    }
    return -1;
}

int evaluatepostfix(string exp)
{
    stack<int> st;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == ',' || exp[i] == ' ')
        {
            continue;
        }
        else if (isoperator(exp[i]))
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            int result = operation(exp[i], operand1, operand2);
            st.push(result);
        }
        else if (isdigit(exp[i]))
        {
            int operand = 0;
            while (i < exp.length() && isdigit(exp[i]))
            {
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            i--;
            st.push(operand);
        }
    }
    return st.top();
}

int main()
{
    string str;
    cout<<"enter the expression to be evaliated : "<<endl;
    getline(cin , str);
    int result = evaluatepostfix(str);
    cout<<"output : "<<result<<endl;
    return 0;
}

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
// bool isoperand(char c);
// bool isoperator(char c);
// int higherprecednce(char a, char b);
// string infixtopostfix(string str);

// int main()
// {
//     string str;
//     cout << "enter the expression: ";
//     getline(cin, str);
//     string ans = infixtopostfix(str);
//     cout << "ans : " << ans;
//     return 0;
// }
// string infixtopostfix(string str)
// {
//     stack<char> s;
//     string res = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ' || str[i] == ',')
//         {
//             continue;
//         }
//         else if (isoperator(str[i]))
//         {
//             while (!s.empty() && s.top() != '(' && higherprecednce(s.top(), str[i]))
//             {
//                 res += s.top();
//                 s.pop();
//             }
//             s.push(str[i]);
//         }
//         else if (isoperand(str[i]))
//         {
//             res += str[i];
//         }

//         else if (str[i] == '(')
//         {
//             s.push(str[i]);
//         }
//         else if (str[i] == ')')
//         {
//             while (!s.empty() && s.top() != '(')
//             {
//                 res += s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//     }
//     while (!s.empty())
//     {
//         res += s.top();
//         s.pop();
//     }

//     return res;
// }

// bool isoperand(char c)
// {
//     if (c >= '0' && c <= '9')
//         return true;
//     if (c >= 'a' && c <= 'z')
//         return true;
//     if (c >= 'A' && c <= 'Z')
//         return true;
//     else
//         return false;
// }

// bool isoperator(char c)
// {
//     if (c == '+' || c == '-' || c == '*' || c == '/' || c=='$')
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int rihgtprecedence(char c)
// {
//     if (c == '$')
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int weightprecedence(char c)
// {
//     int weight = -1;
//     switch (c)
//     {
//     case '+':
//     case '-':
//         weight = 1;
//         break;
//     case '*':
//     case '/':
//         weight = 2;
//         break;
//     case '$':
//         weight = 3;
//         break;
//     }
//     return weight;
// }

// int higherprecednce(char a, char b)
// {
//     int weight_a = weightprecedence(a);
//     int weight_b = weightprecedence(b);

//     if (weight_a == weight_b)
//     {
//         if (rihgtprecedence(a))
//         {
//             return false;
//         }
//         else{return true;
//         }
//     }
//     return weight_a > weight_b ? true : false;
// }

