#include<bits/stdc++.h>
using namespace std;

void SubSequences( string str, int index, string output, vector<string> &ans){
    //base case
    if(str.length() <= index){
        ans.push_back(output);
        return;
    }

    //exclude
    SubSequences(str, index + 1, output, ans);

    //include
    output.push_back(str[index]);
    SubSequences(str, index + 1, output, ans);
}

int main(){
    
    string str;
    vector<string> ans;
    string output;

    cin>> str;

    SubSequences(str, 0, output, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}