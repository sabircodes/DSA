#include <iostream>
using namespace std;
#define n 4
void printBoard(int board[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}
bool issafe(int board[n][n], int row, int col)
{
    // check for queen in column
    for (int i = 0; i < row; i++)
    { // checking for another queen in  the down part.
        if (board[i][col])
        {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    { // left upper diagonal
        if (board[i][j])
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    { // right upper diagonal
        if (board[i][j])
        {
            return false;
        }
    }
    return true;
}

// writing the logic
bool nqueen(int board[n][n], int row)
{

    if (row == n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (issafe(board, row, col))
        {
            board[row][col] = 1; // is it is safe then 1 will be added to the place

            if (nqueen(board, row + 1)) // using recursion we will move to the next row
            {
                return true;
            }

            else
            {
                board[row][col] = 0; // this  line will help in the back tracking process
            }
        }
    }
    return false;
}

bool checksol()
{
    int board[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = 0;
    if (nqueen(board, 0) == false)
    {
        return -1;
        cout << "No sol!" << endl;
    }
    printBoard(board);
    return true;
}

int main()
{
    checksol();

    return 0;
}