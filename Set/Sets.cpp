#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    // stores only unique elements in sorted order.
    //Unordered set stores elements in random order. 
    //insert, erase, find, count has time complexity of O(logn);
    //size, begin, end, empty has time complexity of O(1);

    s.insert(23);
    s.insert(53);
    s.insert(26);
    s.insert(83);
    s.insert(13);
    s.insert(23);

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "does element 13 exists? : " << s.count(13) << endl;

    set<int> :: iterator itr = s.find(26);

    for(auto it = itr; it != s.end(); it++){
        cout<< *it << " ";
    }

    cout<<endl;

    cout<< "value at itr:" << *itr <<endl;

    return 0;
}