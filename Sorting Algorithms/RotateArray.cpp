#include<bits/stdc++.h>
using namespace std;

void RotateArray(int arr[],int n, int k){
    for(int i=0; i<k; i++){
        for(int j=n-1; j>=0; j--){
            arr[j+1] = arr[j];
            if(j==0){
                arr[j] = arr[n];
            }
        }
    }
}

void printArray(int arr[], int n){
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 

int main(){
    
    int arr[] = {1,2};
    RotateArray(arr,2,3);
    printArray(arr,2);
    return 0;
}