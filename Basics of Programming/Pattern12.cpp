#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row, count = 0;
    char ch = 'A';

    cout<< "Enter the number of rows: ";
    cin>>row;

    for(int i=0; i<row; i++){
        for(int j=0; j<i+1; j++){
            cout<<char(ch + count++)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}