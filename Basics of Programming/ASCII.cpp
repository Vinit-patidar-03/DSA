#include<iostream>

using namespace std;

int main()
{
 char ch;

 cin>>ch;

 if(ch>=97 && ch<=122)
 {
    cout<<"Character is lowercase"<<endl;
 }
 else if(ch>=65 && ch<=90)
 {
    cout<<"Character is Uppercase"<<endl;
 }
 else if(ch>=48 && ch<=57)
 {
    cout<<"Character is numeric"<<endl;
 }
    return 0;
}