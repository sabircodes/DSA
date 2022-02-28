// #include<iostream>
// using namespace std;

// int linearsearch(int arr[] , int size , int key){
//     for (int i = 0; i < size ; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i ;
//         }

//     }
//     return -1;
// }
// int main(){

//     int size ;
//     cout<<"enter the size : ";
//     cin>>size;

//     cout<<"enter the elements : "<<endl;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"enter the key : ";
//     cin>>key;

//     cout<<linearsearch(arr,size,key);

//     return 0;
// }

#include<iostream>
using namespace std;

int binsearch(int arr[] , int n , int key){
    int l =0;
    int h = n-1;
    while (l<=h)
    {
        int mid = ((l+h)/2);
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
        
    }
    // return -1;

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binsearch(arr,n,key);
    
    return 0;
}