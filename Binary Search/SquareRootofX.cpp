#include <bits/stdc++.h>
using namespace std;

int findSQRT(int X)
{
    //here we are applying binary serach on Search Space i.e. 1 to X.
    int s = 0;
    int e = X - 1;
    int mid = s + (e - s) / 2;
    int ans;
    int square = mid * mid;

    while (e >= s)
    {
        if (square > X)
        {
            e = mid - 1;
        }
        else if (square < X)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square == X)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
        square = mid * mid;
    }
    return ans;
}

double morePrecision(int key, int places, int tempNo)
{
    double factor = 1;
    double ans = tempNo;

    for (int i = 0; i < places; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < key; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int key;

    cout<< "Enter the Number: ";
    cin>> key;

    int tempNo = findSQRT(key);

    cout << morePrecision(key, 3, tempNo);
    return 0;
}