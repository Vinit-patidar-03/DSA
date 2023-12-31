#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 

    cin>> n;

    //Creating a 1D array
    int *arr = new int[n];

    //Taking Input
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    //Printing Input
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}