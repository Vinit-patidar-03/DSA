#include<bits/stdc++.h>
using namespace std;

//GCD BY EUCLID'S ALGORITHM

int gcd(int x,int y){
    if(x == 0){
        return y;
    }else if(y == 0){
        return x;
    }else{
        while(x != y){
            if(x > y){
                x= x - y;
            }else{
                y = y - x;
            }
        }
        return x;
    }
}

int main(){
    int x,y;

    cout<<"Enter the values of x and y: ";
    cin>>x>>y;

    cout<<"GCD of "<<x<<" and "<<y<<" is: "<<gcd(x,y)<<endl;
    return 0;
}