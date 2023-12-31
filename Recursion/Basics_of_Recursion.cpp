#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    
    //base condition
    if(num == 1){
        return 1;
    }
    
    //recursive function or relation
    return num * factorial(num-1);
}

int main(){
    
    int num;

    cin >> num;

    cout << "Value of factorial of " << num << " is: " << factorial(num);
    return 0;
}