#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;

    cout<< "Enter the number of rows: ";
    cin>>row;

    for(int i=0; i<row; i++){
        for(int j=i; j>=0; j--){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}