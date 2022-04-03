// #include <iostream>
// #include <vector>
// using namespace std;
// // class heap
// // {
// // public:
//     void insert(int arr[], int val)
//     {
//         int temp;
//         int i = val;
//         temp = arr[i];
//         while (i > 1 && temp < arr[i / 2])
//         {
//             arr[i] = arr[i / 2];
//             i = i / 2;
//         }
//         arr[i] = temp;
//     }
// //     void create_heap(){
        
// //     }

// // };

// int main()
// {
//     int arr[] = {0, 2, 5, 9, 3, 4};
//     for(int i = 2 ; i <= 5 ; i++){
//             insert(arr,i);
//     }
//     for(int i =0 ; i <6 ; i++){
//         cout<<arr[i]<<"->";
//     }
//     cout<<"NULL"<<endl;

//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}

void heapify(vector<int> &arr , int i ){
    int size = arr.size();
    int largest = i; // for min heap it will be considered smallest elemnt
    int lchild = 2*i+1;
    int rchild = 2*i+2;
    if(lchild <size && arr[lchild]>arr[largest] ){  // to print min heao just change the sign arr[lchild]<arr[smallest]
        largest = lchild;
    }
    if(rchild < size && arr[rchild]>arr[largest] ){ // to print min heap just change the sign arr[rchild]<arr[smallest]>
        largest = rchild;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,largest);
    }

 }

 void insert(vector<int> &arr , int val){
     if(arr.size()== 0 ){
         arr.push_back(val);
     }

     else{
         arr.push_back(val);
         for(int  i = arr.size()/2 - 1 ; i >=0  ;  i-- ){
             heapify(arr,i);

         }
     }
 }

void print (vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++)
    {
            cout<<arr[i]<<"->";
            // cout<<endl;
    }
}

int main(){
    vector<int>tree;
    insert(tree, 3);
    insert(tree, 4);
    insert(tree, 9);
    insert(tree, 5);
    insert(tree, 2);

    cout<<"<Max heap array "<<endl;
    print(tree);


     return 0;
}