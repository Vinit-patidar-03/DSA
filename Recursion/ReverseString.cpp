#include <bits/stdc++.h>
using namespace std;

void reverse(char st[], int s, int e)
{

    // base case
    if (s > e)
    {
        return;
    }

    swap(st[s], st[e]);

    // recursive call
    reverse(st, s + 1, e - 1);
}

int main()
{

    char str[100];

    cin >> str;

    reverse(str, 0, strlen(str) - 1);

    cout << str << endl;

    return 0;
}