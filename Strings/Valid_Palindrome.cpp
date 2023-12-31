#include <bits/stdc++.h>
using namespace std;

// FUNCTION TO COVERT IN LOWERCASE
char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

// FUNCTION TO CHECK VALID CHARACTER
bool isValid(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

// FUNCTION TO CHECK PALINDROME
bool checkPalindrome(string s)
{
    int st = 0, e = s.length() - 1;

    while (st <= e)
    {
        if (s[st++] != s[e--])
        {
            return false;
        }
    }
    return true;
}

// FUNCTION TO CHECK PALINDROME
// THIS APPROACH HAS MORE TIME COMPLEXITY
/* bool isPalindrome(string s)
{
    int st = 0, e = s.length() - 1;

    while (st <= e)
    {
        if (isValid(s[st]) && isValid(s[e]))
        {
            if (toLowerCase(s[st]) == toLowerCase(s[e]))
            {
                st++;
                e--;
            }
            else
            {
                return false;
            }
        }
        else if (isValid(s[st] && !isValid(s[e])))
        {
            e--;
        }
        else if (!isValid(s[st] && isValid(s[e])))
        {
            st++;
        }
    }
    return true;
} */

//FUNCTION TO CONVERT IN A VALID STRING AND THEN CHECK
bool isPalindrome(string s){
   string temp;

   for(int i = 0; i < s.length(); i++){
       if(isValid(s[i])){
        temp.push_back(toLowerCase(s[i]));
       }
   }

    return checkPalindrome(temp);
}

int main()
{

    string s;

    cout << "Enter String to Check:" << endl;
    cin >> s;

    if(isPalindrome(s)){
        cout << "Given string is palindrome" << endl;
    }else{
        cout << "Given string is not a palindrome" << endl;
    }
    return 0;
}