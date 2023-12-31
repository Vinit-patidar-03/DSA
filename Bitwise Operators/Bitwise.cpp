#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0; i<=5; i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

    //Variables and Scopes

    int a;
    //now we can't initialize another variable with same name in same block(parent block);

    if(true)
    {
        int a;
        //This is an another block which can access variable 'a' of parent block but if initialize variable with same name "a" it will use its own variable.  
    }

    //we can't access the variable of any child in parent block.
    return 0;
}