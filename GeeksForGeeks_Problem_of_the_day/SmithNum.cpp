#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return true;
        }
    }
    return false;
}

void primeFactors(vector<int> &arr, int n)
{

    while (n % 2 == 0)
    {
        arr.push_back(2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            arr.push_back(i);
            n /= i;
        }
    }

    if (n > 2)
    {
        arr.push_back(n);
    }
}

int getDigitSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int getSum(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + getDigitSum(arr[i]);
    }
    return sum;
}

int main()
{

    int num;

    cin >> num;

    vector<int> arr;

    primeFactors(arr, num);

    if (!isPrime(num))
    {
        return 0;
    }

    if (getDigitSum(num) == getSum(arr))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}