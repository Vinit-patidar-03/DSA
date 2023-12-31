#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;

    cin>>n;

    int bit;
   long long int binNumber=0;
    int i=0;

    while(n!=0)
    {
        bit = n%2;
        binNumber = bit * pow(10,i) + binNumber;
        n = n/2;
        i++;
    }

    cout<< binNumber <<endl;
     return 0;
}