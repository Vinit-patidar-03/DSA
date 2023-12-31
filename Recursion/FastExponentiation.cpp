#include<bits/stdc++.h>
using namespace std;

int Power(int a, int b){

    static int ans = 1;

    //base case
    if(b == 0){
        return ans;
    }

    //processing
    if(b&1){
        ans = ans * a;
    }
    a = a * a;
    b /= 2;

    return Power(a, b);
}

int main(){
    
    int a, b; 
    
    cin>>a>>b;

    cout<< a <<"^" << b << " is: " << Power(a,b); 
    return 0;
}