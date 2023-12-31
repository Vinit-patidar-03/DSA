#include<bits/stdc++.h>
using namespace std;

//FAST EXPONENTIATION WITH TIME COMPLEXITY O(log(m));
int fastExponentiation(int n, int m){
   int res = 1;

   while(m > 0){
      if(m % 2 != 0){
         res = res * n;
      }
      n = n * n;
      m = m/2;
   }
   return res;
}

int main(){
    int num, power;

    cout<< "Enter the Numbers to find Exponents: ";
    cin>>num>>power;

    cout<<"Value of number "<<num<<" to the power "<<power<<" is: "<<fastExponentiation(num,power)<<endl;
    return 0;
}