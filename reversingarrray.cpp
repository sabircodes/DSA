#include <iostream>
using namespace std;

void reverse_array(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void displayarr(int arr[], int n)
{
    cout << "the reversed array -->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}

int main()
{
    // creating the array
    int n;
    cout << "enter the size of array you want: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the original array -->" << endl;
    // displaying the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
    // creating the eversed array

    reverse_array(arr, 0, n - 1);

    // dislaying the reversed array
    displayarr(arr, n);

    return 0;
}
