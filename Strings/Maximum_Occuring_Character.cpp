#include<bits/stdc++.h>
using namespace std;

//FUNCTION TO GET MAXIMUM OCCURING CHARACTER
char getMaxOccurance(string s){
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
       int number = s[i] - 'a';
       arr[number]++;
    }

    int ans = -1, max = arr[0];

    for(int i=0; i<26; i++){
        if(max < arr[i]){
            max = arr[i];
            ans = i;
        }
    }

    return 'a' + ans;
}

int main(){
    
    string s;

    cout << "Enter a String:" << endl;
    cin >> s;

    cout << "The maximum occuring character is: "<< getMaxOccurance(s) << endl;
    return 0;
}