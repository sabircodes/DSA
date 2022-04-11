//chaining
// #include <iostream>
// #include <list>
// using namespace std;
// class Hash
// {
// private:
//     int size;
//     list<int> *arr; // array of pointers
// public:
//     Hash(int s)
//     {
//         this->size = s;
//         arr = new list<int>[size];
//     }

//     int hashfunc(int val)
//     {
//         return (val % size);
//     }
//     void insertitem(int val)
//     {
//         int index = hashfunc(val);
//         arr[index].push_back(val);
//     }

//     void delete_func(int val)
//     {
//         int index = hashfunc(val);

//         // find the key in (index)th list
//         list<int>::iterator itr;
//         for (itr= arr[index].begin();
//              itr != arr[index].end(); itr++)
//         {
//             if (*itr == val)
//                 break;
//         }

//         if (itr != arr[index].end())
//             arr[index].erase(itr);
//     }

//     void display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << i; // this will iterate through the index  of array elements
//             for (auto j : arr[i])
//             {
//                 cout << "-->" << j;
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int arr[] = {15, 11, 27, 8, 12};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Hash h(10);
//     for (int i = 0; i < size; i++)
//     {
//         h.insertitem(arr[i]);
//     }
//     h.insertitem(45);
//     h.insertitem(32);
//     h.insertitem(52);
//     h.delete_func(12);

//     h.display();

//     return 0;
// }

// LINEAR PROBING
#include <iostream>
#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
class hashnode{
    public:
    int value ;int key;
        hashnode(int k , int v){
            value = v;
            key = k;

        }
};
class hashtable{
    hashnode **arr;
    int capacity;
    public:
        hashtable(int val){
            capacity = val;
            arr = new hashnode*[capacity];
            for(int i = 0 ; i < capacity ; i++){
                arr[i]=NULL;

            }
        }

        int hashfunc(int val){
            return val%capacity;
        }

        void insert(int key ,int value){
            int index = hashfunc(key);
            hashnode *temp = new hashnode(key,value);
            while(arr[index]!=NULL && arr[index]->key !=key && arr[index]->key!=-1){
                index++;
                index %=capacity;
            }
        }

        int search(int key){
            int index = hashfunc(key);
            int count = 0;
            while(arr[index]!=NULL ){
                if(count++>capacity){
                    return NULL;
                }
                if(arr[index]->key ==key){
                    return arr[index]->value;
                }
                index++;
                index%=capacity;
            }
            return NULL;
        }

        void display(){
            for(int i = 0 ; i < capacity ; i++){
                if(arr[i]!=NULL && arr[i]->key !=-1){
                        cout<<"key "<<arr[i]->key
                        <<"value = "
                        <<arr[i]->value<<endl;
                }
            }
        }






};
int main()
{
    hashtable h(10) ;
    h.insert(1,1);
    h.insert(2,2);
    h.insert(2,3);
    h.display();



    return 0;
}