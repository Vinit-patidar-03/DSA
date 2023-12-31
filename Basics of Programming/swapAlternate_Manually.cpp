#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[],int n)
{
     int temp;

     for(int i = 0; (i + 1) < n; i += 2)
     {
         temp = arr[i];
         arr[i] = arr[i + 1];
         arr[i + 1] = temp;
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

    revArray(arr,n);
    printArray(arr,n);

    return 0;
}