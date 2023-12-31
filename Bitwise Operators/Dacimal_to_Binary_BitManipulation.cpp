#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;

    cin>>n;

    int bit;
    int binNumber=0;
    int i=0;

    while(n!=0)
    {
        bit  = n&1;
        binNumber = bit * pow(10,i) + binNumber;
        n = n >> 1;
        i++;
    }

    cout<<binNumber<<endl;
    
    return 0;
}