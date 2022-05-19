#include<iostream>
#include<stack>
using namespace std;


int main(){
    string s;
    cout<<"enter: "<<endl;
    cin>>s;
    int n = s.length();
    stack<char>st ; // creating a stack of size string
    for(int i = 0 ; i< n ; i++){
        st.push(s[i]);
    } 
     string reverse = "";

    while(!st.empty()){
        reverse+=st.top();
        st.pop();
    }

    if(s==reverse){
        cout<<"It is a palindrome !";
    }
    else{
        cout<<"It is  Not a palindrome"<<endl;
    }
     return 0;
}