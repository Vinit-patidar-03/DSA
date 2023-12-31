#include<bits/stdc++.h>
using namespace std;

void update(int &n){
     n++;
}

//Bad Practice
int& updateNum(int n){
    int &num = ++n;
    return num;
}

int main(){
    
    int i = 5; 
    //Reference Variable: In this case both the variables i and j represent the same address;
    int &j = i;

    i++;

    cout<< j << " " << i << " ";

    cout<< &j << " " << &i << endl;

    update(i);

    cout<< i << endl;

    int &num  = updateNum(i);

    cout<< num ;

    return 0;
}