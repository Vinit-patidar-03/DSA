#include<bits/stdc++.h>
using namespace std;

//nth term of fibonnaci
int fib(int n)
{
    int a = 0, b = 1;
    int nextTerm;

    for(int i = 1;i < n; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return nextTerm;
}

int main(){
    
    int n;

    cin >> n;

    int answer = fib(n);

    cout<< "answer is: " << answer << endl;
    return 0;
}