#include<bits/stdc++.h>
using namespace std;

int setBits(int a,int b)
{
   int count = 0;
   int bitA;
   int bitB;

   while( a!=0 || b!=0)
   {
      bitA = a&1;
      bitB = b&1;

      if((bitA == bitB) && bitA == 1)
      {
         count = count + 2;
      }
      else if((bitA != bitB) && ((bitA == 1) || (bitB == 1)))
      {
        count = count + 1;
      }

      a = a >> 1;
      b = b >> 1;
   }
   return count;
}

int main(){
    
    int a , b ;

    cin >> a >> b;

    int answer = setBits(a,b);

    cout << "answer is : " <<answer;
    return 0;
}