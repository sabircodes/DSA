// default constructors --> takes no parameters 
// #include<iostream>
// using namespace std;

// class car{
//     private:
//         string brand;
//         string model_name;
//     public:
//         car(void);// default constructor
//         void print_name(void){
//             cout<<"the company of car is  : "<<brand <<" and its model name  is : "<<model_name;
//         }
// };
// car::car(void){
//     brand = "BMW";
//     model_name = "M5";
// }

// int main(){
//     car cars;
//     cars.print_name();
//     return 0;
// }

//paramterized class:
// #include<iostream>
// using namespace std;

// class car{
//     public:
//         string model;
//         string car_name;
    
//         car(string v1 , string v2){ //parametrized call 
//             model = v1;
//             car_name  = v2;

//         }

// };
// int main(){
//     car mycar("BMW","M5");
//     car fcar("AUDI","A8");
    
//     cout<<"the model of car is : "<<mycar.model<<" "<<"abd the name of model is: "<<mycar.car_name<<endl;
//     cout<<"the model of car is : "<<fcar.model<<" "<<"abd the name of model is: "<<fcar.car_name<<endl;

//     return 0;
// }

//practice question

// #include<iostream>
// #include <math.h> // helped with sqrt part in the code
// using namespace std;
// class point{
//     private:
//         int x,y;
//         friend void distance_points(point o1 , point o2); // friend funtion being called to acess the private values 
//     public:
//         point(int a, int b){ // parameterized constructor !!!
//             x=a;
//             y=b;
//         }
//         void get_point(void){
//             cout<<"("<<x<<","<<y<<")"<<endl;
//         }
// };

// void distance_points(point o1 , point o2){
//     int x = o2.x - o1.x;
//     int y = o2.y - o1.y;
//     float dist = sqrt((x*x)+(y*y));
//     cout<<"distance: "<<dist<<" units";
    
    


// }

// int main(){
//     point c1(1,1) , c2(1,1);
//     c1.get_point();
//     c2.get_point();

//     cout<<"the distance between the two coordinates: "<<endl;
//     distance_points(c1,c2);
//     return 0;
// }