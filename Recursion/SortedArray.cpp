#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return size;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    return isSorted(arr + 1, size - 1);
}

int main()
{

    int arr[100], size;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, size))
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}