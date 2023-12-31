#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
   for(int i=0; i<arr.size(); i++){
    cout<<arr[i] << " ";
   } 
}

void getSubsets(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans){

    //base case
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    getSubsets(arr, output, index + 1, ans);
 
    //include
    output.push_back(arr[index]);
    getSubsets(arr, output, index + 1, ans);

}

int main(){
    
    vector<int> arr(100);
    vector<vector<int>> result;
    vector<int> output;

    int size;

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    getSubsets(arr, output, 0, result);
 
    printArray(output);

    return 0;
}