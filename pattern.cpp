// #include <iostream>
// using namespace std;
// int main()
// {
    // pattern 1
    //  *****
    //  *****
    //  *****
    //  *****
    //  *****
    //  int row,col;
    //  cout<<"enter row , col :"<<endl;
    //  cin>>row>>col;
    //  for (int i = 0; i <= row; i++)
    //  {
    //      for (int j = 0; j <col; j++)
    //      {
    //          cout<<"*";
    //      }cout<<endl;

    // }

//     int row, col;
//     cout << "enter row , col :" << endl;
//     cin >> row >> col;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row ||j == 1 || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }cout<<endl;

//     }

//     return 0;
// }

//PASCALS TRIANGLE
// 1  -->  1c0
// 1 1 -->  1c0 , 1c1
// 1 2 1 -->  2c0 , 2c1 , 2c2
// 1 3 3 1 -->  3c0 , 3c1 , 3c2 , 3c3
// 1 4 6 4 1 -->  4c0 , 4c1 , 4c2 , 4c3 ,4c4
// #include<iostream>
// using namespace std;
// int fac(int num ){
//     int factorial = 1;
//     for (int  i = 2; i <=num; i++)
//     {
//         factorial *= i ;

//     }
//     return factorial;
    
// }
// int main(){
//     int row;
//     cout<<"enter  the number of rows : ";
//     cin>>row;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }