#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageCount = 0;

    for(int i = 0; i<n; i++)
    {
        if(pageCount + arr[i] <= mid){
            pageCount += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }else{
                pageCount = arr[i];
            }
        }
    }
    return true;
}

int main(){
    int arr[] = {10,40,30,20};
    int m = 2, sum = 0;

    //here we will apply the concept of search space no matter array is sorted or not.
    for(int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    int s = 0, e = sum, ans = -1;
    
    while (s <= e)
    {
       int mid = s + (e - s)/2;
         if(isPossible(arr,4,m,mid)){
           ans = mid;
           e = mid - 1;
         }
         else{
           s = mid + 1;
         }
    }
     
    cout<<ans;
    return 0;
}