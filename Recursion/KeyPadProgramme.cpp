#include<bits/stdc++.h>
using namespace std;

void keyPadProblem(string str, string output, vector<string> &ans, int index, string mapping[]){
    //base case
    if(index >= str.length()){
        ans.push_back(output);
        return;
    }

    //processing
    int mappedIndex = str[index] - '0';
    string mappedStr = mapping[mappedIndex];

    for(int i=0; i<mappedStr.length(); i++){
        output.push_back(mappedStr[i]);
        keyPadProblem(str, output, ans, index + 1, mapping);
        //backtrack
        output.pop_back();
    }
 }

void printArray(vector<string> arr){
   for(int i=0; i<arr.size(); i++){
    cout<<arr[i] << " ";
   } 
}

int main(){
    
    string str;
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    cin>>str;

    if(str.length() == 0){
        return 0;
    }

    keyPadProblem(str, output, ans, index, mapping);

    printArray(ans);

    return 0;
}       