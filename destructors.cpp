#include<iostream>
using namespace std;
//destructors ner=ver take a value and never returns any value
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time the constructor is called for object number  "<<count<<endl;
        }

        ~num(){
            cout<<"this is the time when destructor is called  for object number "<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"we are inside our main function: "<<endl;
    cout<<"creatingg objecy for n1"<<endl;
    num n1 ;
    {   cout<<"entering this block."<<endl;
        cout<<"creating two more objects: "<<endl;
        num n2 , n3;
        cout<<"exiting this block:"<<endl;
    }
    cout<<"back to main function and exiting."<<endl;
    

    return 0;
}