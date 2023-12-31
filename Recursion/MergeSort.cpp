#include<bits/stdc++.h>
using namespace std;

void MergeArray(int *arr, int s, int e){

    int mid = s + (e - s) /2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    } 

    mainArrayIndex = mid + 1;
     for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    } 

    //merge two sorted arrays
    int firstIndex = 0, secondIndex = 0;
    mainArrayIndex = s;

    //if length of both the arrays is not zero.
    while(firstIndex < len1 && secondIndex < len2){
        if(first[firstIndex] > second[secondIndex]){
            arr[mainArrayIndex++] = second[secondIndex++];
        }else{
            arr[mainArrayIndex++] = first[firstIndex++];
        }
    }

    //if length of 1st array is zero.
    while(secondIndex < len2){
        arr[mainArrayIndex++] = second[secondIndex++];
    }

    //if length of 2nd array is zero.
    while(firstIndex < len1){
        arr[mainArrayIndex++] = first[firstIndex++];
    }

    delete [] first;
    delete [] second;
}

void MergeSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return ;
    }

    int mid = s + (e - s)/2;

    //sort left part of array
    MergeSort(arr, s, mid);

    //sort right part of array
    MergeSort(arr, mid + 1, e);

    //Merge two sorted array
    MergeArray(arr, s, e);
}

int main(){
    
    int arr[100], size;

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    MergeSort(arr, 0, size - 1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}