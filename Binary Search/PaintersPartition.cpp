#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid){
    int painterCount = 1;
    int boardCount = 0;

    for(int i = 0; i<n; i++)
    {
        if(boardCount + arr[i] <= mid){
            boardCount += arr[i];
        }else{
            painterCount++;
            if(painterCount > m || arr[i] > mid)
            {
                return false;
            }else{
                boardCount = arr[i];
            }
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
     int sum = 0;

    //here we will apply the concept of search space no matter array is sorted or not.
    for(int i = 0; i < boards.size(); i++)
    {
        sum += boards[i];
    }

    int s = 0, e = sum, ans = -1;
    
    while (s <= e)
    {
       int mid = s + (e - s)/2;
         if(isPossible(boards,boards.size(),k,mid)){
           ans = mid;
           e = mid - 1;
         }
         else{
           s = mid + 1;
         }
    }

return  ans;

}

int main(){
    
    return 0;
}