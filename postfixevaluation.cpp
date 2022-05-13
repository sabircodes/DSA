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
    if (a == '+' || a == '-' || a == '*' || a == '/' || a=='^')
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

    if(z=='^'){
        return operand1^operand2;

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
    string str ;
    //NOTE TO SELF  while entering the value provide space in between them for eg = 2 3 +
    cout<<"enter the expression to be evaliated : "<<endl;
    getline(cin , str);
    int result = evaluatepostfix(str);
    cout<<"output : "<<result<<endl;
    return 0;
}

