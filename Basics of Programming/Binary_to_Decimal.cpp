#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long int n;

  cin >> n;

  int bit;
  int DecNumber = 0;
  long long int i = 0;

  while (n != 0)
  {
    bit = n % 10;
    if (bit == 1)
    {
      DecNumber = bit * pow(2, i) + DecNumber;
    }
    n = n / 10;
    i++;
  }

  cout << DecNumber << endl;

  return 0;
}