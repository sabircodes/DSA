#include<iostream>
using namespace std;
int main(){
    int x  , y  , z ;
    cout<<"Enter the x , y"<<endl;
    cin>>x>>y;
    try
    {
        if(y==0){
            throw 101;
        }
        z= x/y;
        cout<<"The value of z : "<<z<<endl;
    }
    catch(int e)
    {
        cout<<"Division error!!"<<"Error code: "<<e<<endl;
    }
    cout<<"bye"<<endl;
    
    return 0;
}