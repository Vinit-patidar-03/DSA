#include <bits/stdc++.h>
using namespace std;

void RotateArray(int arr[], int n, int k)
{
    int arr1[n], j = 0;
    for (int i = n - k; i < n; i++, j++)
    {
        arr1[j] = arr[i];
    }

    for (int i = 0; i < n - k; i++, j++)
    {
        arr1[j] = arr[i];
    }

    if (n - k < 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - i - 1]);
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr1[i];
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1,2,3};
    RotateArray(arr, 3, 3);
    printArray(arr, 3);
    return 0;
}