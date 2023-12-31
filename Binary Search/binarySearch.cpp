#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int element)
{
    int start = 0;
    int end = size - 1;
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
    
    int arr[] = {1,3,5,6,7};

    int answer = binarySearch(arr,5,5);

    cout << "Index of 5 is: " << answer << endl;
    return 0;
}