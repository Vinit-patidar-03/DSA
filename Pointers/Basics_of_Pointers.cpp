#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    int *ptr = &num;

    cout<< "Enter value of num: ";
    cin>> num;

    cout<< "value of num is: "<< num << "\nAddress of num: " << &num;
    cout<< endl <<*ptr;

    int arr[5] = {1,2,3,4};
    int *p = arr;

    cout<< 1[arr] << endl;
    cout<< arr << endl;
    cout<< sizeof(arr) << " " << sizeof(p);
    cout << endl << sizeof(int *);
    cout<< endl << p;

    return 0;
}