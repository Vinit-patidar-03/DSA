#include <bits/stdc++.h>
using namespace std;

// LINEAR SEARCH IN 2D ARRAY
bool isExist(int arr[][3], int row, int column, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

// ROW WITH MAXIMUM SUM
int maxRowSumandIndex(int arr[][3], int row, int column)
{
    int maximum = INT_MIN, rowIndex, sum;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
        if (maximum < sum)
        {
            maximum = sum;
            rowIndex = i;
        }
    }

    cout << "Maximum Sum of Row: " << sum << endl;
    return rowIndex + 1;
}

// COLUMN WITH MAXIMUM SUM
int maxColumnSumandIndex(int arr[][3], int row, int column)
{
    int maximum = INT_MIN, columnIndex, sum;
    for (int i = 0; i < column; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        if (maximum < sum)
        {
            maximum = sum;
            columnIndex = i;
        }
    }

    cout << "Maximum Sum of Column: " << sum << endl;
    return columnIndex + 1;
}

int main()
{

    int arr[3][3], key;

    // TAKING INPUT FOR 2D ARRAY
    cout << "Enter Elements to store in 3 x 3 2D Array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // PRINTING INPUT OF 2D ARRAY
    cout << "Formed 2D Array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter element to search: " << endl;
    cin >> key;

    if (isExist(arr, 3, 3, key))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    cout << "Maximum Row sum and Index: "<< endl << maxRowSumandIndex(arr,3,3) << endl;

    cout << "Maximum Column sum and Index: "<< endl << maxColumnSumandIndex(arr,3,3) << endl;

    return 0;
}