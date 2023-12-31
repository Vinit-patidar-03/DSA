#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY OF THIS SOLUTION IS O(M*N);
void printSpiral(int arr[][100], int row, int col){
    int count = 0, total = row * col;
    int startingRow = 0, endingRow = row - 1, startingCol = 0, endingCol = col - 1;
    while (count < total)
    {
        //PRINTING STARTING ROW
        for(int i=startingRow; i<=endingCol && count < total; i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }

        startingRow++;

        //PRINTING ENDING COLUMN
          for(int i=startingRow; i <=endingRow && count < total; i++){
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        //PRINTING ENDING ROW
          for(int i=endingCol; i>=startingCol && count < total; i--){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        //PRINTING STARTING COLUMN
          for(int i=endingRow; i>=startingRow && count < total; i--){
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }
    
}

int main()
{

    int arr[100][100], row, col;

    cout << "Enter Number of row: " << endl;
    cin >> row;

    cout << "Enter Number of column: " << endl;
    cin >> col;

    cout << "Enter the Elements for 2D array of " << row * col << " size:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    printSpiral(arr, row, col);
    return 0;
}