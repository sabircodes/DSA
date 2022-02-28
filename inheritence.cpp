// #include <iostream>
// using namespace std;

// class employee
// { // Base class
// public:
//     int id;
//     float salary;
//     employee(){};
//     employee(int inpid)
//     {
//         id = 1;
//         salary = 34.0;
//     }
// };

// // if  you inherit something privately then the public members of base class becomes private for derived class
// // if u do that public htne it will inherit publically;
// // default visibility mode is private
// // private memebrs are never inherited
// class progarmer : public employee
// {
// public:
//     progarmer(int inpid)
//     {
//         id = inpid;
//     }
//     int lamguage_code = 9;
//     // void get_data(){
//     //     cout<<id<<endl;
//     // }
// };
// int main()
// {
//     employee sam(1), kim(2);
//     cout << sam.salary << endl;
//     cout << kim.salary << endl;

//     progarmer skill(10);
//     cout << skill.lamguage_code<<endl;
//     cout<<skill.id<<endl;
//     // skill.get_data();
//     return 0;
// }

//single inheritence 
// #include<iostream>
// using namespace std;
// class base {
//     int data1;
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2();

// };

// void base :: setdata(void){
//     data1=10;
//     data2=20;
// }

// int base :: getdata1(){
//     return data1;

// }

// int base :: getdata2(){
//     return data2;

// }

// class drived : public base{
//     int data3;
//     public:
//         void process();
//         void display();

// };

// void drived :: process(){
//     data3=data2*getdata1();
// }
// void drived :: display(){
//     cout<<"value of data 1 is : "<<getdata1()<<endl;
//     cout<<"value of data 2 is : "<<data2<<endl;
//     cout<<"value of data 3 is : "<<data3<<endl;
// }



// int main(){
//     drived der;
//     der.setdata();
//     der.process();
//     der.display();
//     return 0;
// }

//concept of protected  
/*              public derivation  private drivation  protected derivation
1.public:          Not inherited    not inherited        not inherited
2.ptivate:             protected    private                 protected
3.protected:            public      private                  protected


*/

// #include<iostream>
// using namespace std;
// class base{
//     protected://it is just like private but it can be inherited
//         int a;
//     private:
//         int b;

// };




// class derived : base{

// };

// int main(){
//     return 0;
// }

//multi level inheritence
// #include<iostream>
// using namespace std;
// class student {
//     protected:
//         int roll_number;
//     public:
//         void set_roll_number(int r){
//             roll_number= r;
//         }
//         void get_roll_number(){
//             cout<<"The roll number is : "<<roll_number<<endl;
//         }
// };

// class exam : public student{
//     protected:
//         float maths;
//         float physics;
//     public:
//         void set_marks(float m, float p ) {
//             maths=m;
//             physics=p;
//         }
//         void get_marks(){
//             cout<<"The marks obtained in maths are : "<<maths<<" "<<"and the marks obtained in phyiscs are : "<<physics<<endl;
//         }
// };

// class result : public exam{
//     float percentage;
//     public:
//         void display(){
//             get_roll_number();
//             get_marks();
//             cout<<"the percentage is "<<(maths+physics)/2<<"%"<<endl;


//         }

// };


// int main(){
//     result sam;
//     sam.set_roll_number(69);
//     sam.set_marks(95 , 96);
//     sam.display();
//     return 0;
// }