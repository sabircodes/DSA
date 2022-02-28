#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cout << "enter the value of rows and columns" << endl;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // spiral formation print

    int row_Start = 0, col_Start = 0, row_End = n - 1, col_End = m - 1;
    while (row_Start <= row_End && col_Start <= col_End )
    {
        // for row start
        for (int col = col_Start; col <= col_End; col++)
        {
            cout << arr[row_Start][col] << " ";
        }
        row_Start++;

        // for col_End
        for (int row = row_Start; row <= row_End; row++)
        {
            cout << arr[row][col_End] << " ";
        }
        col_End--;

        // for row_End
        for (int col = col_End; col >= col_Start; col--)
        {
            cout << arr[row_End][col] << " ";
        }
        row_End--;

        // for col_Start
        for (int row = row_End; row >= row_Start; row--)
        {
            cout << arr[row][col_Start] << " ";
        }
        col_Start++;
    }

    return 0;
}