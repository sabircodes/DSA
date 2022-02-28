#include<iostream>
#include<math.h>
using namespace std;

class simplecalculator {
    int num1, num2;
    public:

        void get_num(){
            cout<<"enter num1 : "<<endl;
            cin>>num1;

            cout<<"enter num2 : "<<endl;
            cin>>num2;


        }
        void show_Cal(){
            cout<<"The addition  of two number is : "<<num1+num2<<endl;
            cout<<"The subtrction of two number is : "<<num1 - num2<<endl;   
            cout<<"The product of two number is : "<<num1*num2<<endl;        
            cout<<"The  division of two numbers: "<<num1/num2<<endl;
        }

        


};

class scical{
    int a , b;
    public:

        void get_val(){
            cout<<"enter a : "<<endl;
            cin>>a;

            cout<<"enter b : "<<endl;
            cin>>b;

        }
        void show(){
            cout<<"The sin value  is : "<<sin(a)<<endl;
            cout<<"The cos value  is : "<<cos(a)<<endl;
            cout<<"The cosine value  is : "<<acos(a)<<endl;
        }  
        
};

class hybridcal : public simplecalculator , public scical{

};



int main(){
    hybridcal c;

    c.get_num();
    c.show_Cal();
    c.get_val();
    c.show();
    return 0;
}