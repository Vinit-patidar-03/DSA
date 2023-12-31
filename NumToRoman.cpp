#include <bits/stdc++.h>
using namespace std;

void convert(int num, map<int, string> &numMap, string &ans)
{

    // base case
    if (num == 0)
    {
        return;
    }

    int prevNum;

    // processing
    map<int, string>::iterator iter;

    for (iter = numMap.begin(); iter != numMap.end(); iter++)
    {

        if (num == iter->first || (iter->first == 1000 && num > 1000))
        {
            ans = ans + numMap[iter->first];
            num = num - iter->first;
            break;
        }
        else if (num < iter->first)
        {
            ans = ans + numMap[prevNum];
            num = num - prevNum;
            break;
        }
        else
        {
            prevNum = iter->first;
        }
    }

    // recursion
    convert(num, numMap, ans);
}

int main()
{
    int num;
    map<int, string> numMap = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
    string ans = "";

    cout << "enter number to convert from number to roman: ";
    cin >> num;

    convert(num, numMap, ans);

    cout << ans;
    return 0;
}