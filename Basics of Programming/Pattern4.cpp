#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;

    cout<< "Enter the number of rows: ";
    cin>>row;

    for(int i=0; i<row; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}