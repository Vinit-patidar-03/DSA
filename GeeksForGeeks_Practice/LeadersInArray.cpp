#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> temp)
{
    for (int i = 0; i < temp.size() / 2; i++)
    {
        swap(temp[i], temp[temp.size() - i - 1]);
    }
    return temp;
}

void printArray(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
}

vector<int> getLeaders(int arr[], int n)
{
    int max;

    vector<int> Leaders;

    max = arr[n - 1];

    Leaders.push_back(max);

    for (int i = n - 2; i >= 0; i--)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            Leaders.push_back(max);
        }
    }

    return reverse(Leaders);
}

int main()
{
    int arr[100], size;

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

   vector<int> leaders = getLeaders(arr, size);

   printArray(leaders);

    return 0;
}