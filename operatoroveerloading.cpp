#include<iostream>
#include<string>
using namespace std;
class yotubechanel{
    public :
        string Name;
        int Subscriber;
        yotubechanel(string name , int subscriber){
            Name = name;
            Subscriber = subscriber;

        }
};

ostream &operator<<(ostream &COUT, yotubechanel &ytchanel){
    COUT<<"NAME: "<<ytchanel.Name<<endl;
    COUT<<"Sunscriber: "<<ytchanel.Subscriber<<endl;
    return COUT;
}
int main(){
    yotubechanel y1("sabircodes",540000);
    // cout<<y1<<endl; // this line will priduce an error , in order for this to work we have to overload the (<<) operator
    //After overloading the operator
    cout<<y1<<endl; 
    return 0;
}