#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int *arr, int size)
{

    // base case
    if (size == 0 || size == 1)
    {
        return;
    }

    // processing
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    swap(arr[size - 1], arr[max]);

    // recursive call
    SelectionSort(arr, size - 1);
}

int main()
{

    int arr[100], size;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}