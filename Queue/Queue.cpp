#include<bits/stdc++.h>
using namespace std;

int main(){
    
    queue<string> q;
    //Works in FIFO fashion

    q.push("vinit");
    q.push("patidar");
    q.push("khargone");

    cout<< q.size()<< endl;

    cout<< q.front() <<endl;
    q.pop();
    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    return 0;
}