#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;
    int *col = new int [row];

    cin>>row;

    int **arr = new int *[row];
    cout<< "Enter Columns to create Jagged array for "<< row << " rows: ";
    for(int i=0; i<row; i++){
        cin>>col[i]; 
        arr[i] = new int [col[i]];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cin>> arr[i][j] ;
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cout<< arr[i][j] << " ";
        }
        cout<< "\n";
    }


    return 0;
}