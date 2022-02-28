#include<iostream>
using namespace std;

class complex{
    private:
        int a,b;

    friend complex sumcomplex(complex o1 , complex o2); //it is basically a function that can acess the private information but it can be outside 
    public:
        void setdata(int n1 , int n2){
            a=n1;
            b=n2;
        }
        void printnumber(){
            cout<<"the complex no. is "<<a<<"+ i"<<b<<endl;
        }

};
complex sumcomplex(complex o1 , complex o2){
    // cout<<a;  this will throw an error explanation of (point 6)
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b + o2.b));
    return o3;

 }

int main(){
    complex c1 ,c2 , sum;
    c1.setdata(1,3);
    c1.printnumber();

    c2.setdata(4,5);
    c2.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();
    
    return 0;
}

/*
propertiese of friend function :
1.not a part of class 
2.since it is not the part of the classs it can not be called by the object  of those class for eg --> c1.sumcomplex is invalid.
3. this function can be used without the help of any objects.
4.usually takes onject as an input , can also work without them.
5. can be declared inside public or private part both.
6. cannot acess the members directly by their  names and need object_name.memmebr_name to acess any member



*/