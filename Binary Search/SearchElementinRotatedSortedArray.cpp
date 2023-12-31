#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[],int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(e > s)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int binarySearch(int arr[],int start, int end,int element)
{
    int mid = (start + end)/2;
    //avoid using this method of finding middle element
    //we can use mid = start + (end - start)/2

    while(start <= end)
    {
        if(element == arr[mid])
        {
            return mid;
        }

        if(element > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
} 


int main(){
    int arr[] = {7,9,1,2,3};
    int key = 2;
    int pivot = findPivot(arr,5);

    if(key >= arr[pivot] && key <= arr[4])
    {
        cout<< binarySearch(arr,pivot,5,key);
    }
    else{
        cout<< binarySearch(arr,0,pivot - 1,key);
    }

    return 0;
}