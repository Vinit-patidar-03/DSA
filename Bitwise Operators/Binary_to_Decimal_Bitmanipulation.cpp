#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;

    cin>>n;

    //Computer is treating input as Decimal but we want to give Binary.
    int bit;
    int DecNumber = 0;
    int i = 0;

    while(n!=0)
    {
        bit = n&1;
        DecNumber = bit * pow(2,i) + DecNumber;
        n = n >> 1;
        i++;
    }

    cout<<DecNumber<<endl;
    
    return 0;
}