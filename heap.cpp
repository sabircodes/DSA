#include <iostream>
#include <vector>
using namespace std;

    void insert(int arr[], int val)
    {
        int temp;
        int i = val;
        temp = arr[i];
        while (i > 1 && temp >  arr[i / 2])
        {
            arr[i] = arr[i / 2];
            i = i / 2;
        }
        arr[i] = temp;
    }
int delete_func(int arr[], int n){
    int x ,  i , j  , deletedval;
    deletedval = arr[1];
    // x=arr[n];
    arr[1] = arr[n];
    arr[n]=deletedval; // thi stores the elemt at last place
    i = 1 , j = 2*i;
    while(j < n-1){
        if(arr[j+1]>arr[j]){
            j = j+1;
        }
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);	
            i = j ;
            j = 2*j;
        }
        else{ 
            break;
            }
    }
    return deletedval;


}

int main()
{
    int arr[] = {0, 10 , 20 , 30 , 25 , 5 , 40 ,35 };
    int i ;
    for( i = 2 ; i <= 7 ; i++){
            insert(arr,i);
    }
    // cout<<"deted value is: "<<delete_func(arr,7);
    // cout<<endl;
    //heap sort
    cout<<"heap sort :";
    for(i = 7 ; i > 1; i--){
        
        delete_func(arr,i);
    }
    for(int i =1 ; i <=7 ; i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;


    return 0;
}



// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &a , int &b){
//     int temp = a;
//     a=b;
//     b=temp;
// }

// void heapify(vector<int> &arr , int i ){
//     int size = arr.size();
//     int largest = i; // for min heap it will be considered smallest elemnt
//     int lchild = 2*i+1;
//     int rchild = 2*i+2;
//     if(lchild <size && arr[lchild]>arr[largest] ){  // to print min heao just change the sign arr[lchild]<arr[smallest]
//         largest = lchild;
//     }
//     if(rchild < size && arr[rchild]>arr[largest] ){ // to print min heap just change the sign arr[rchild]<arr[smallest]>
//         largest = rchild;
//     }

//     if(largest != i){
//         swap(arr[largest], arr[i]);
//         heapify(arr,largest);
//     }

//  }

//  void insert(vector<int> &arr , int val){
//      if(arr.size()== 0 ){
//          arr.push_back(val);
//      }

//      else{
//          arr.push_back(val);
//          for(int  i = arr.size()/2 - 1 ; i >=0  ;  i-- ){
//              heapify(arr,i);

//          }
//      }
//  }

// void print (vector<int> &arr){
//     for(int i = 0 ; i < arr.size() ; i++)
//     {
//             cout<<arr[i]<<"->";
//             // cout<<endl;
//     }
// }

// int main(){
//     vector<int>tree;
//     insert(tree, 3);
//     insert(tree, 4);
//     insert(tree, 9);
//     insert(tree, 5);
//     insert(tree, 2);

//     cout<<"<Max heap array "<<endl;
//     print(tree);


//      return 0;
// }