#include <bits/stdc++.h>
using namespace std;

int main()
{

    deque<int> d;
    // In double ended que we can do insertion and deletion at both the ends (i.e. on back and on front);

    d.push_back(21);
    d.push_back(27);
    d.push_front(10);
    d.push_front(28);

    for (auto i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    cout<< d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
    cout<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+1);

     for (auto i : d)
    {
        cout << i << " ";
    }

    cout<<endl;


    d.pop_back();

    for (auto i : d)
    {
        cout << i << " ";
    }

    cout << endl;
    d.pop_front();

    for (auto i : d)
    {
        cout << i << " ";
    }

    return 0;
}