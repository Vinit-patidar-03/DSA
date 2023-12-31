#include<bits/stdc++.h>
using namespace std;

int main(){
     
     stack<string> s;
     //works in LIFO fashion

     s.push("vinit");
     s.push("sagar");
     s.push("piyush");

     cout<< s.top() <<endl;

     s.pop();

     cout<< s.top()<<endl;

     cout<< s.size()<<endl;

     cout<< s.empty();


    return 0;
}