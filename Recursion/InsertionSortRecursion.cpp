#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int *arr, int size){
    static int start = 1;

    //base case
    if(start == size){
        return ;
    }

    //processing
    int temp = arr[start];
    int i;
    for(i = start - 1; i >= 0; i--){
        if(arr[i] > temp){
            arr[i+1] = arr[i];
        }else{
            break;
        }
    }
    arr[i+1] = temp;
    start++;

    //recursive call
    InsertionSort(arr, size);
}

int main(){
    
    int arr[100], size;

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    InsertionSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}