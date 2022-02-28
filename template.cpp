// #include <iostream>
// using namespace std;
// template<class T>
// class Vector
// {
// public:
//     T *arr;
//     int size;
//     ;
//     Vector(){

//     }
//     Vector(T m)
//     {
//         size = m;
//         arr = new T[size];
//     }
//     T dotproduct(Vector &v)
//     {
//         T sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += this->arr[i] * v.arr[i];
//         }
//         return sum;
//     }
// };
// int main()
// {
//     // the code below an not be used for any data type 
//     // Vector v1(3);
//     // v1.arr[0]=4;
//     // v1.arr[1]=1;
//     // v1.arr[2]=2;

//     // Vector v2(3);
//     // v2.arr[0]=5;
//     // v2.arr[1]=0;
//     // v2.arr[2]=1;
//     // int ans = v1.dotproduct(v2);
//     // cout<<"The dot  product of vector v1 and v2 is : "<<ans<<endl;

//     // The code below can be used for any data type
//     Vector <float>v1(3);
//     v1.arr[0]=4.2;
//     v1.arr[1]=1.5;
//     v1.arr[2]=2.3;

//     Vector <float>v2(3);
//     v2.arr[0]=5.6;
//     v2.arr[1]=0.2;
//     v2.arr[2]=1.9;
//     float ans = v1.dotproduct(v2);
//     cout<<"The dot  product of vector v1 and v2 is : "<<ans<<endl;

//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// template<class T1 , class T2>
// class calculate{
//     public:
//         T1 num1 ;
//         T2 num2 ;
//         calculate(T1 v1, T2 v2){
//             num1 = v1;
//             num2 = v2;
//         }

//         void answer(){
//             cout<<"The product of two number is : "<<num1*num2<<endl;
//             cout<<"The sum of two number is: "<<num1+num2<<endl;
//             cout<<"The sin of "<<num1<<" is: "<<sin(num1)<<endl;
//             cout<<"The cos of "<<num2<<" is: "<<cos(num2);


//         }
// };

// int main(){
//     calculate <int , float> c1(2,5.2);
//     c1.answer();
//     return 0;
// }

