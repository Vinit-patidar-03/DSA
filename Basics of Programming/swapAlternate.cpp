#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n)
{
     int start = 0;
     int end = 1;

     while(start != n && end != n)
     {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
     }
}

void printArray(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[100],n;

    cin >> n;

    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
    }

    swapAlternate(arr,n);
    printArray(arr,n);

    return 0;
}