// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     virtual void start()
//     {
//         cout << "The car has started!!" << endl;
//     }
//     virtual void stop()
//     {
//         cout << "The car stopped" << endl;
//     }
//     virtual void display() = 0;
// };
// // publically inheriting Car class
// class Tesla : public Car
// {
//     string s;

// public:
//     Tesla(string a)
//     {
//         s = a;
//     }
//     void start()
//     {
//         cout << "The Tesla has started!" << endl;
//     }
//     void stop()
//     {
//         cout << "The Tesla has stopped!" << endl;
//     }
//     void display()
//     {
//         cout << "owned by : " << s << endl;
//         cout << "Amazing Car" << endl;
//     }
// };

// class TATA : public Car
// {
//     string s;

// public:
//     TATA(string a)
//     {
//         s = a;
//     }
//     void start()
//     {
//         cout << "The TATA has started!" << endl;
//     }
//     void stop()
//     {
//         cout << "The TATA has stopped!" << endl;
//     }
//     void display()
//     {
//         cout << "Owned by " << s << endl;
//         cout << "magnificent car " << endl;
//     }
// };

// int main()
// {
//     Tesla Ts("ELon");
//     TATA T("Ratan");
//     Car *c[2];
//     c[0] = &Ts;
//     c[1] = &T;
//     c[0]->start();
//     c[0]->display();
//     cout << endl;
//     c[1]->start();
//     c[1]->display();
//     return 0;
// }

#include <iostream>
using namespace std;
// void is_valid(int n , int m ){
   
//     if(n<=m && m%n ==0 ){
//         cout<<"yes";
//     }
    
//   else{
//     cout<<"no";
       
//   }
// }

int main() {
	// your code goes herei
	
    int n , m;
    cin>>n>>m;
    if(m>=n && m%n==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
	return 0;
}
