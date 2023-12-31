#include <bits/stdc++.h>
using namespace std;

int Power(int a, int b)
{

    // base case
    if (b == 1)
    {
        return a;
    }

    //recursive call
    int ans = Power(a, b / 2);

    //processing
    if (b & 1)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{

    int a, b;

    cin >> a >> b;

    cout << a << "^" << b << " is: " << Power(a, b);
    return 0;
}