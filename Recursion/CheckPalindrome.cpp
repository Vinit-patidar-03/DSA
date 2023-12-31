#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& st, int s){

    //base case
    if(s > st.length() - s - 1){
        return true;
    }

    if(st[s] != st[st.length() - s - 1]){
        return false;
    }

    //recursive call
    return isPalindrome(st, s + 1);
}

int main(){
    
    string str;

    cin>> str;

    if(isPalindrome(str, 0)){
        cout<< "Given String is Palindrome";
    }
    else{
        cout<< "Given String is not Palindrome";
    }

    return 0;
}