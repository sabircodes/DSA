// SELECTION SORT
//  #include<iostream>
//  using namespace std;

// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i <size-1; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                 int temp ;
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }

//         }

//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// BUBBLE SORT
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // buble sort
    int count = 1;
    while (count < size)
    {
        for (int i = 0 ; i < size-count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i]=arr[i + 1];
                arr[i + 1]=temp;
            }

        }
        count++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// INSERTIN SORT
// insert an elment from unsorted array ti its corect position in sorted Array.
// #include<iostream>
// using namespace std;
// int main(){ 
//     int size;
//     cout << "enter the size: ";
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     //insertion sort
//     for (int i=1; i < size; i++)
//     {
//         int current = arr[i];
//         int j = i-1;
//         while (arr[j]>current && j >= 0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;

//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Merge sort :
// #include <iostream>
// using namespace std;

// void merge(int arr[], int l, int mid, int r)
// {
//     int left = mid - l + 1;
//     int right = r - mid;
//     //Creating two diffrent arrays
//     int leftarr[left];
//     int rightarr[right];

//     //filling these two arrays with the values form main array
//     for (int i = 0; i < left ; i++)
//     {
//         leftarr[i] = arr[l + i];
//     }
//     for (int i = 0; i < right; i++)
//     {
//         rightarr[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < left && j < right)
//     {
//         if (leftarr[i] < rightarr[j])
//         {
//             arr[k] = leftarr[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = rightarr[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < left)
//     {
//         arr[k] = leftarr[i];
//         k++;
//         i++;
//     }
//     while (j < right)
//     {
//         arr[k] = rightarr[j];
//         k++;
//         j++;
//     }
// }

// void mergesort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         mergesort(arr, l, mid);
//         mergesort(arr, mid + 1, r);

//         merge(arr, l, mid, r);
//     }
// }

// int main()
// {
//     int arr[] = {5,4,3,2,1,6,8,6,9,66,12,120,45};
//     mergesort(arr, 0, 12);
//     cout << "The sorted array is: " << endl;
//     for (int i=0; i < 13; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Quick sort
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// //the partition function 
// int partition(int arr[], int start, int end)
// {
//     int pivot = arr[end];
//     int pindex = start;
//     for (int i = start ; i < end; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             swap(arr[i], arr[pindex]);
//             pindex++;
//         }
//     }
//     swap(arr[pindex], arr[end]);
//     return pindex;
// }

// void Quicksort(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         int partionindex = partition(arr, start, end);
//         Quicksort(arr, start, partionindex - 1);
//         Quicksort(arr, partionindex + 1, end);
//     }
// }

// int main()
// {
//     int arr[] = {9, 6, 3, 8, 5, 2, 7, 4, 1};
//     Quicksort(arr, 0, 8);
//     for (int i = 0; i < 9; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }