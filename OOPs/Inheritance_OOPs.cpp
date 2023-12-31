#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;

    void getAge()
    {
        cout << this->age << endl;
    }

    void getHeight()
    {
        cout << this->height << endl;
    }

    void getWeight()
    {
        cout << this->weight << endl;
    }
};

class Male : public Human
{
public:
    int salary;

    void getSalary()
    {
        cout << this->salary << endl;
    }
};

int main()
{
    Male m1;

    cout << m1.age << " " << m1.height << " " << m1.weight << " " << m1.salary << endl;

    m1.getAge();
    m1.getHeight();
    m1.getWeight();
    m1.getSalary();

    return 0;
}