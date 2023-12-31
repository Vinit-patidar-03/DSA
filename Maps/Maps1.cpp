#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;

void display(map<string, int> &marks)
{
    // Creating an iterator
    map<string, int>::iterator iter;
    // Assigning iterator on first position
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
}
int main()
{
    map<string, int> marks = {{"pappu", 1}, {"shyam", 2}};

    map<string, int> marksMap;
    // stores data in sorted order of key.
    // Unordered map stores data in random order.
    // Assigning Key and Values to Map
    // here insert, count, erase, find has time complexity O(logn);

    marksMap["vinit"] = 80;
    marksMap["Sagar"] = 99;
    marksMap["Himanshu"] = 98;
    marksMap["Piyush"] = 97;

    display(marksMap);
    display(marks);

    marksMap.insert({{"Rajat", 95}, {"ChillBro", 80}});
    cout << "\nAfter Insertion" << endl;
    display(marksMap);
    cout << marksMap.count("vinit") << endl;

    marksMap.erase("Rajat");
    display(marksMap);
    return 0;
}