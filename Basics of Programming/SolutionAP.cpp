#include<bits/stdc++.h>
using namespace std;

int AP(int n)
{
    return (3 * n + 7);
}
int main(){
    
    int n;

    cin >> n;

    int term = AP(n);

    cout << "answer is: "<< term << endl;

    return 0;
}