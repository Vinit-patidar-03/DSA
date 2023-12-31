#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size){
    
    //base case 
    if(size == 0 || size == 1){
        return;
    }

    //processing
    for(int i=0; i<size - 1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    BubbleSort(arr, size - 1);
}

int main(){
    
    int arr[100], size;

    cin>> size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    BubbleSort(arr, size);

    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}