// #include<iostream>
// using namespace std;
// class shop
// {

//     private:
//         int itemid[100];
//         int idprice[100];
//         int counter;
//     public:
//         void intcounter(void) {counter = 0;} 
//         void setprice(void);
//         void displayprice(void);
// };

// void shop :: setprice(void){
//     cout<<"enter the id of item"<<endl;
//     cin>>itemid[counter];
//     cout<<"enter the price of "<<itemid[counter]<<endl;
//     cin>>idprice[counter];
//     counter ++;
// }

// void shop :: displayprice(void){
//     for (int i = 0; i < counter; i++)
//     {
//         cout<<"the price of"<<itemid[i]<<"is "<<idprice[i]<<endl;
//     }
    
// }


// int main(){
//     int item;
//     cout<<"enter the number of item: ";
//     cin>>item;
//     shop myhsop;
//     myhsop.intcounter();
//     for (int i = 0; i < item; i++)
//     {
//         myhsop.setprice();
//     }
//     myhsop.displayprice();
//     return 0;
// }



// passing objects in function arguments in class

// #include<iostream>
// using namespace std;

// class complex{
//     private:
//         int a;
//         int b;
//     public:
//         void setdata(int v1 , int v2);
//         void setdatabysum(complex o1 , complex o2);
//         void printnumber();

   
// };

// void complex :: setdata(int v1 , int v2)
// {
//     a = v1;
//     b = v2;
// }

// void complex :: setdatabysum(complex o1 , complex o2)
// {
//     a= o1.a + o2.a;
//     b= o1.b + o2.b;
// }

// void complex :: printnumber()
// {
//     cout<<"the complex number is "<<a<<"+ i"<<b<<endl;
// }



// int main(){
//     complex c1,c2,c3;
//     c1.setdata(1,2);
//     c1.printnumber();
    
//     c2.setdata(3,4);
//     c2.printnumber();
    
//     c3.setdatabysum(c1,c2);
//     c3.printnumber();
    
//     return 0;
// }