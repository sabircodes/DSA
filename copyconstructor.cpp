// #include<iostream>
// using namespace std;
// class number{
//     int a; 
//     public:
//         number(){
//             a=0;
//         };
//         number(int num){
//             a=num;
        
//         }
//         number(number &obj){
//             cout<<"copy constructor called"<<endl;
//             a=obj.a;
        
//         }
//         void display(){
//             cout<<"the number for this object is  : "<<a<<endl;
//         }
// };
// int main(){
//     number  x, y, z(45) ,z2;
//     z.display();
//     x.display();
//     y.display();
//     // z1 should exactly remember z or x or y
//     number z1(z); //copy constructor invoked
//     z1.display();// defaulgt copy constructor is already present there .
//     z2=z; //copy constructor is not called.
//     number z3=z; //copy constructor invoked
     
//     // whe object is pred deifined it will not be called by copy constructor.
//     //but when you creatd a new object it will surely be called .
    
//     // when no copy constructor is found  compiler suppli es its own copy constructor.


//     return 0;
// }