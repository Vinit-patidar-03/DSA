#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int cry;
};

class Human
{
public:
    string color;
};

class Kids : public Animal, public Human
{
public:
    int age;
};

int main()
{
    Kids kid;

    cout << kid.cry << endl;
    cout << kid.color << endl;
    cout << kid.age << endl;

    return 0;
}