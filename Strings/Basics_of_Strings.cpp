#include <bits/stdc++.h>
using namespace std;

// FUNCTION TO CONVERT UPPERCASE CHARACTER INTO LOWERCASE
char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

// REVERSE FUNCTION FOR STRING
void reverseString(char name[], int len)
{
    int st = 0;
    int e = len - 1;

    while (st < e)
    {
        swap(name[st++], name[e--]);
    }
}

// FUNCTION FOR STRING LENGTH
int strLength(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}

// FUNCTION TO CHECK IF A STRING IS PALINDROME OR NOT
bool checkPalindrome(char name[], int len)
{
    int st = 0, e = len - 1;

    while (st <= e)
    {
        if (name[st++] != name[e--])
        {
            return false;
        }
    }
    return true;
}

// MAIN FUNCTION EXECUTION STARTS FROM HERE
int main()
{

    char name[20];
    int len;

    cout << "enter your name" << endl;
    cin >> name;

    len = strLength(name);
    cout << "Length of string is " << len << endl;

    reverseString(name, len);

    cout << "Your name is " << name << endl;

    if (!checkPalindrome(name, len))
    {
        cout << "String is not a palindrome" << endl;
    }
    else
    {
        cout << "String is a palindrome" << endl;
    }

    cout << "Lowercase of Given character is " << toLowerCase('S') << endl;
    return 0;
}