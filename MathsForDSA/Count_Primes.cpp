#include<bits/stdc++.h>
using namespace std;

//SIEVE OF ERATOSTHENES METHOD
int countPrimes(int n){
    int count = 0;
    int arr[n];
    fill_n(arr,n,1);
    arr[0] = arr[1] = 0;

    for(int i=2; i<n; i++){
        if(arr[i]){
            count++;
            for(int j=2*i; j<n; j+=i){
                arr[j] = 0;
            }
        }
    }
    return count;
}

int main(){
    
    int num;

    cout<<"Enter the Number: ";
    cin>>num;

    cout<<"Total number of prime numbers before "<<num<<" is: "<<countPrimes(num)<<endl;
    return 0;
}