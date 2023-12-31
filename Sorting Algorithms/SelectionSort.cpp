#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {64,25,12,22,11};
    int min;

    for(int i = 0; i<4; i++)
    {
       min = i;
       for(int j = i + 1; j<5; j++)
       {
          if(arr[min] > arr[j])
          {
            min = j;
          }
       }
       swap(arr[min],arr[i]);
    }

    for(int i = 0; i<5; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}