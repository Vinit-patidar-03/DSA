#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;

    if(mid == 0){
        return mid;
    }
    else if(key == arr[mid]){
        cout<< mid << " ";
        return mid;
    }
    else if( key > arr[mid]){
        return BinarySearch(arr + mid + 1, size - mid - 1, key);
    }
    else{
        return BinarySearch(arr, size - mid - 1, key);
    }
}

int main(){
    
    int arr[100], size, key;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the element for Array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<< "Enter Key Element to Find: ";
    cin>> key;

    cout<< BinarySearch(arr, size, key);


    return 0;
}