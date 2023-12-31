#include<bits/stdc++.h>
using namespace std;

//when array elements follow two monotonic functions then we can apply binary search for finding pivot element.
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
int main(){
    
    int arr[] = {7,9,1,2,3};

    cout<<"index of pivot element is: "<< findPivot(arr,5);
    return 0;
}