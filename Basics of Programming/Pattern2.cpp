#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row, col, count = 1;

    cout<< "Enter the number of rows and cols: ";
    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<count++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}