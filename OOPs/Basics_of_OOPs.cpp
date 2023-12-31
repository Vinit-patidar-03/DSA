#include <bits/stdc++.h>
using namespace std;

// we can either make class in external file or we can make file in the same file.
// External file can be included by #include "file_name.cpp";

// creation of class
// if we don't define a constructor then behind the scene a consutructor is automatically created with name of our class.
// Then constructor invokes when we make object.
// once we defined our own constructor the default constructor will die for always.

class Hero
{

private:
    char Level;

public:
    // properties
    int health;
    char *name;
    static int timetoComplete;

    Hero()
    {
        cout << "Constructor called on time of object creation" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health, char level)
    {
        cout << "address: " << this << endl;
        this->health = health;
        this->Level = level;
    }

    // copy constructor
    // pass by value will create an infinite loop.
    // copy constructor for Deep copy
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->Level = temp.Level;
    }

    // getters and setters
    // for accessing private properties we can use getters and setters.
    char getLevel()
    {
        return Level;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int Health)
    {
        health = Health;
    }

    void setLevel(char level)
    {
        Level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << health << endl;
        cout << Level << endl;
    }

    void print1()
    {
        cout << health << endl;
        cout << Level << endl;
        cout << name << endl;
    }

    static int random()
    {
        cout << "I can only access static members also I don't have 'this' keyword: " << timetoComplete << endl;
        return timetoComplete;
    }

    // destructor
    ~Hero()
    {
        cout << "Destructor bhai called" << endl;
    }
};

int Hero::timetoComplete = 10;

int main()
{

    // //creation of object with static allocation
    // Hero h1;
    // h1.setHealth(10);
    // h1.setLevel('A');

    // h1.print();
    // cout<< sizeof(h1) <<endl;

    // //creation of object with dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(100);
    // b->setLevel('B');

    // b->print();

    // (*b).print();

    // //if we created many parameterized constructor then consructor will be called according the parameters passed.
    // //Here two parameter constructor is called.
    // Hero h2(50, 'Z');
    // cout<< &h2 << endl;
    // h2.print();

    // //Here copy constructor will be called.
    // Hero h3(h2);
    // h3.print();

    // shallow copy and deep copy.
    // default constructor does shallow copy.
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');
    char name[7] = "vinit";
    hero1.setName(name);

    hero1.print1();

    // default copy constructor does shallow copy
    // our own constructor does deep copy
    Hero hero2(hero1);
    hero2.print1();

    hero1.name[0] = 'B';
    hero1.print1();

    hero2.print1();

    // preferred way
    cout << Hero::timetoComplete << endl;
    cout << Hero::random() << endl;

    // not preferred
    cout << hero2.timetoComplete << endl;

    // dynamic --> destuctor will not call automatically.
    Hero *hero4 = new Hero();
    // now destructor will called.
    delete hero4;

    return 0;
}