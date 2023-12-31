#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int Amount;

    cin >> Amount;

    switch( 1 )
    {
        case 1: cout<<"Note of 100 RS : " << Amount/100 << endl;
                Amount = Amount - ((Amount/100) * 100);
                cout<<"Note of 50 RS : " << Amount/50 << endl;
                Amount = Amount - ((Amount/50) * 50); 
                cout<<"Note of 20 RS : " << Amount/20 << endl; 
                Amount = Amount - ((Amount/20) * 20);
                cout<<"Note of 1 RS : " << Amount/1 << endl; 
    }
    return 0;
}