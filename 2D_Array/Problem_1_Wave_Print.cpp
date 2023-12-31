#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//TIME COMPLEXITY OF THIS SOLUTON IS O(M*N);
void wavePrint(int arr[][100], int row, int column)
{
    for (int i = 0; i < column; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = row-1; j>=0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{

    int row, column, arr[100][100];

    cout << "Enter Number of Rows" << endl;
    cin >> row;

    cout << "Enter number of columns" << endl;
    cin >> column;

    cout << "Enter elements for 2D array of " << row * column << " size: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(arr, row, column);
    wavePrint(arr, row, column);
    return 0;
}