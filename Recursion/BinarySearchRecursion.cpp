#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int s, int e, int key){

    int mid = s + (e - s)/2;

    if(s > e){
        return 0;
    }
    else if(key == arr[mid]){
        return mid;
    }
    else if( key > arr[mid]){
        return BinarySearch(arr ,mid + 1, e, key);
    }
    else{
        return BinarySearch(arr, s, mid - 1, key);
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

    if(!BinarySearch( arr, 0, size - 1, key)){
        cout<< "Element Not Found";
    }else{
        cout<< BinarySearch( arr, 0, size - 1, key);
    }


    return 0;
}