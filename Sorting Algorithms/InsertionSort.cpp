#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {27, 29, 67, 9, 12};
    int j;

    //handling rounds
    for (int i = 1; i < 5; i++)
    {
        //logic for round
        j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                printArray(arr, 5);
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}