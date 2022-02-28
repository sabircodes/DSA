#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool mypair(char opening , char close){
    if(opening=='(' && close==')') return true;
    else if(opening=='{' && close=='}') return true;
    else if(opening=='[' && close==']') return true;
    return false;
}
bool check(string st)
{
    stack<char>s;
    for(int i =0 ; i < st.length() ; i++){
        if(st[i]=='(' || st[i]=='{' || st[i]=='['){
            s.push(st[i]);
        }
        else if(st[i]==')'||st[i]=='}'||st[i]==']'){
            if(s.empty() || !mypair(s.top() , st[i])){
                return false;
            }
            
            else{
                s.pop();
            }
        }
    }
    return s.empty() ?true : false;

}
int main()
{
    string expression ;
    cout<<"Enter the expression : ";
    cin>>expression;
    if(check(expression)){
        cout<<"balanced expression"<<endl;
    }
    else{
    cout<<"Not balanced"<<endl;
    }
    return 0;
}