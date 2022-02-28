// #include<iostream>
// using namespace std;
// int main(){

    
//     float pi = 3.14 , radius = 2;
//     float perimeter = 2* pi*radius;
//     cout<<"the perimeter of circle is  : ",cout<<perimeter;
   
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 9 , b = 10;
//     int area = a*b;
//     cout<<"the area of rectangle is : ", cout<<area;
//     return 0;
// }

/////taking input nd output in c++/////
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"enter the value of a: ";
//     cin>>a;
//     cout<<"enter the value of b: ";
//     cin>>b;
//     cout<<"the area of rectangle is : "<<a*b;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int c  = 69;
// int main(){
//     int a , b ,c;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     cout<<"enter the value of b : ";
//     cin>>b;
//     c = a+b;
//     cout<<"the sum is  : "<<c<<endl;
//     cout<<"to acess global value use scope(::) : "<<::c;


//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    
    int num;
	cout << "Input number is : "  << endl;
	cin >> num;
    int arr[num];										// Reading input from STDIN
	for (int i = 0; i < num; i++)
    {
        for (int j = 0; i <=4; i++)
        {
            cout<<"input the array: "<<endl;
            cin>>arr[i];
        }
        
    }
    

    return 0;
}