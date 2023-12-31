#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout << binary_search(v.begin(), v.end(), 9) << endl;

    cout << " lower bound: " << lower_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << " upper bound: " << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;

    int a = 3;
    int b = 4;

    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    string s = "VINIT";

    reverse(s.begin(), s.end());
    cout << s << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    
    // it is based on intro sort which is basically combination of quick sort, heap sort and insertion sort.
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}