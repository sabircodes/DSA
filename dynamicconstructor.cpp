#include<iostream>
using namespace std;
class Bankdposit{
    int principal;
    int years;
    int intresRate;
    int ReturnValue;
    public:
        Bankdposit(){};
        Bankdposit(int p , int y , int r);
        Bankdposit(int p , int y  , float r);
        void show();
};
Bankdposit :: Bankdposit(int p , int y , float r){
    principal = p;
    years = y;
    intresRate =r;
    ReturnValue = 0 ;
    for (int i = 0; i < years; i++)
    {
        ReturnValue = ReturnValue * (1+intresRate);
    }
}

Bankdposit :: Bankdposit(int p , int y , int r){
    principal = p;
    years = y;
    intresRate = float(r)/100;
    ReturnValue =0 ;
    for (int i = 0; i < years; i++)
    {
        ReturnValue = ReturnValue * (1+intresRate);
    }
    

}

void Bankdposit :: show(){
    cout<<"principal amount : "<<principal<<endl<<"return value after years "<<years<<"is "<<ReturnValue;

}

int main(){
    Bankdposit b1, b2 , b3;
    int p;
    int y;
    int r;
    float R;
    cout<<"enter the value of p,y and r : "<<endl;
    cin>>p>>y>>r;
    b1 = Bankdposit(p ,y,r);
    b1.show();
    
    return 0;
}

