#include<bits/stdc++.h>
using namespace std;

int FirstIndex(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(end >= start)
    {
        if(key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
             start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
      return ans;
}

int LastIndex(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(end >= start)
    {
        if(key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
             start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
      return ans;
}
//for finding total number of occurances we can use firstocc and lastocc method.

int main(){

    int arr[] = {0, 5, 5, 6, 6, 6};

    cout<< FirstIndex(arr, 6, 6) << endl;
    cout<< LastIndex(arr, 6, 6) << endl;
    cout<< "Total no of occurances of 6 is "<<LastIndex(arr, 6, 6) - FirstIndex(arr, 6, 6) + 1 << endl;
    
    return 0;
}