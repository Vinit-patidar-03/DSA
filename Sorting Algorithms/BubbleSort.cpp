#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 11, 30, 25, 10};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        //variable i represents round no & j represents no of comparisons.
        bool swapped = false;
        //optimizing the code for already sorted arrays.
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}