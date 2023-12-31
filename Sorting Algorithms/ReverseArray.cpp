#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {13,27,29,83,78};

    int s = 0, e = 4;

     while (s <= e)
     {
        swap(arr[s],arr[e]);
        s++;
        e--;
     }
     
     for(int i=0; i<5; i++){
        cout<< arr[i] <<" ";
     }


    return 0;
}