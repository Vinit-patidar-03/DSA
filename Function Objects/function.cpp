#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {12,2,1,11,56};

    //Function Objects (Functor): Functions Wrapped in a class so that it available like an object().

    sort(arr,arr + 5);
    //by deafult it sorts in ascending order.

    sort(arr,arr + 5 ,greater<int>());
    //now it will sort array in descending order.

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}