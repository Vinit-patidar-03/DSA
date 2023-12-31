#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE METHOD
bool isPrime(int n)
{
    if (n <= 1)
    {
        return true;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return true;
            }
        }
        return false;
    }
}



int main()
{

    int num;

    cout << "Enter the Number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "Given Number is not a Prime Number" << endl;
    }
    else
    {
        cout << "Given Number is a Prime Number" << endl;
    }

    return 0;
}