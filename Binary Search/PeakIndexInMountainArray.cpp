#include<bits/stdc++.h>
using namespace std;

 int peakIndexInMountainArray(int arr[], int size) {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start)/2;

        while(start < end)
        {
            if(arr[mid] < arr[mid+1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return end;
    }
int main(){
    int arr[] = {3, 4, 5, 1};
    cout << peakIndexInMountainArray(arr, 4) << endl; 
    return 0;
}