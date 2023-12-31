#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;

    cout<< "Enter the number of rows: ";
    cin>>row;

    for(int i=0; i<row; i++){

        for(int k=0; k<row - i; k++){
            cout<<" ";
        }

        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}