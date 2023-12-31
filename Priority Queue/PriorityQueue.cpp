#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int> max;

    //min heap
    priority_queue<int, vector<int>, greater<int> > min;

    max.push(2);
    max.push(9);
    max.push(23);
    max.push(92);
    max.push(24);
    max.push(20);

    cout<< max.size() <<endl;

    int n = max.size();

    for(int i=0; i<n; i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    min.push(2);
    min.push(9);
    min.push(23);
    min.push(92);
    min.push(24);
    min.push(20);

    cout<< min.size() <<endl;

    int k = min.size();

    for(int i=0; i<k; i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;

    cout<< min.empty() << endl;
    return 0;
}