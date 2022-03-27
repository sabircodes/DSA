
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//     string str = "Hey this is done using file CLass in c++";
//     ofstream out("sample.txt");
//     out << str;

    // reading from a   file:
    //  string st2;
    //  ifstream in("sample2.txt"); //Read operation
    //  // in>>st2; // this will only give u a single word
    //  getline(in, st2);
    //  cout<<st2;
    // return 0;
// }



// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// class Student{
//     public : 
//         string name;
//         int roll_number;
//         string branch;
//         friend ofstream & operator <<(ofstream &ofs , Student &s);
//         friend ofstream & operator >>(ofstream &ifs , Student &s);
        
// };


// ifstream & operator >> (ifstream &ifs , Student &s){
//     ifs>>s.name
//     >>s.roll_number>>s.branch;
//     return ifs;
// }


// ofstream & operator << (ofstream &ofs , Student &s){
//     ofs<<s.name<<endl;
//     ofs<<s.roll_number<<endl;
//     ofs<<s.branch<<endl;
//     return ofs ;


// }
// int main(){
//     Student s1;
//     // s1.name = "Jhon Wick" ; s1.roll_number =69 ; s1.branch = "CS";
//     // ofstream ofs("my.txt",ios::trunc);
//     // // ofs<<s1.name<<endl; 
//     // // ofs<<s1.roll_number<<endl; 
//     // // ofs<<s1.branch<<endl;

//     // ofs<<s1; //overiding the operator so that it can take in all the values of object s1  
//     // ofs.close();

//     ifstream ifs("my.txt");
//     ifs>>s1;// to make this work you have to overload the extraction operator 

//     getline(ifs,s1.name);
//     cout<<"Name: "<<s1.name<<endl;;
//     cout<<"Roll number: "<<s1.roll_number<<endl;
//     cout<<"Branch: "<<s1.branch<<endl;
//     ifs.close();

//      return 0;
// }

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Item{
    private:
        string name;
        float price;
        int qty;
    public:
        Item(){}
        Item(string n , float p , int q){
            name = n ;
            price = p ;
            qty = q ;
        }

        friend ifstream& operator>>(ifstream&ifs , Item &i);
        friend ofstream& operator<<(ofstream&ofs , Item &i);
        friend ostream& operator<<(ostream&os , Item &i);
        
};
 ifstream&operator >> (ifstream &ifs ,Item &i){
     ifs>>i.name>>i.price>>i.qty;
     return ifs;
 }

 ofstream& operator << (ofstream&ofs , Item&i){
     ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
     return ofs;

 }

 ostream& operator<< (ostream&os , Item &i){
     os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
     return os;
 }


int main(){
    Item item;
    string name;
    float price;
    int qty;
    int n ;

    cout <<"Enter number of item :"<<endl;
    cin>>n;
    Item*list[n];
    cout<<"Enter all the items: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<"Item name , item price and quantity: "<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Price: ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>qty;
        list[i] = new Item(name,price,qty);
    }
    ofstream ofs ("item.txt");
    for(int i=0;i<n;i++){
        ofs<<*list[i];
    }

    ifstream ifs("item.txt");
    for(int i=0;i<n;i++){
        ifs>>item;
        cout<<"Item"<<i<<item<<endl;
    }

    return 0;
}