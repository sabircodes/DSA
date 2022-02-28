#include<iostream>
using namespace std;

class youtube{
    protected:
        string title;
        float rating ;
    public:
        youtube(string title,float rating){
            this->title = title;
            this->rating = rating;

        }
        virtual void display(){
            cout<<"Bogus Code!!!";
        }

};


class youtubemusic : public youtube{
    float musiclength ;
    public:
        youtubemusic(string s , float  r ,  float musiclength): youtube(s,r){
            this->musiclength = musiclength;
        }
        void display(){
            cout<<"The title of the song is  : "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"length of music vodeo is : "<<musiclength<<"minutes"<<endl;
        }

};


class website : public youtube{
    int words;
    public:
        website(string s , float r , int wc) : youtube(s, r){
            words = wc;
        }
        void display(){
        cout<<"This is an amazing text tutorial with title  : "<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};



int main(){
    string title ;
    float rating  , musiclength;
    int words ;

    //for yotubemusic:
    title = "Out of nothing at all!" ;
    musiclength=2.50;
    rating =4.99;
    youtubemusic  msvideo(title,rating,musiclength);
    // msvideo.display();

cout<<"***********************************************************************************"<<endl;

    //for website:
    title = "you know if you know  ";
    rating = 4.50;
    words = 200;
    website myweb(title,rating,words);
    // myweb.display();



    //using pointers
    youtube* ptr[2];
    ptr[0]=&msvideo;
    ptr[1]=&myweb;

    ptr[0]->display();
    ptr[1]->display();


    return 0;
}


// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in
// the derived class
               