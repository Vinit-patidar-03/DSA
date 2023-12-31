#include <bits/stdc++.h>
using namespace std;

// encapsulation: wrapping up of data members and functions/methods in single entity is encapsulation.
// capsule is known as the class.
class Students
{
private:
    string name;
    int age;
    int standard;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Students student;

    cout << student.getAge() << endl;
    return 0;
}