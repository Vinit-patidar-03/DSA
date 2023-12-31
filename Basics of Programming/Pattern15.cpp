#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row, col;

    cout<< "Enter the number of rows and cols: ";
    cin>>row>>col;

    for(int i=0; i<row; i++){

        for(int k=0; k<(col-2*i-1)/2; k++){
            cout<<" ";
        }

        for(int j=0; j<2*i+1; j++){
             cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}