#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int s, int e)
{

    int pivotElement = arr[s], count = 0, rightIndex;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotElement)
        {
            count++;
        }
    }

    rightIndex = s + count;
    swap(arr[rightIndex], arr[s]);

    while (s < rightIndex && e > rightIndex)
    {

        while (arr[s] < pivotElement)
        {
            s++;
        }

        while (arr[e] > pivotElement)
        {
            e--;
        }

        if (s < rightIndex && e > rightIndex)
        {
            swap(arr[s++], arr[e--]);
        }
    }

    return rightIndex;
}

void QuickSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // processing
    int p = Partition(arr, s, e);

    QuickSort(arr, s, p - 1);

    QuickSort(arr, p + 1, e);
}

int main()
{

    int arr[100], size;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    QuickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}