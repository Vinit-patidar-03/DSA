#include<bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY OF THIS SOLUTION IS O(log(M*N));
bool isExist(int arr[][100], int row, int col, int key){
    int start = 0, end = row*col - 1;
    int mid = end - (end - start)/2;

    while(start <= end){
        int element = arr[mid/col][mid%col];
        if(element == key){
            return true;
        }

        if(element > key){
            end = mid - 1;        
        }else{
            start = mid + 1;
        }
        mid = end - (end - start)/2;
    }
    return false;
}

int main(){
    
    int arr[100][100], row, col, key;

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

    cout << "Enter Key Element to Search: "<<endl;
    cin >> key;

    if(isExist(arr, row, col, key)){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element not Found"<<endl;
    }
    
    return 0;
}