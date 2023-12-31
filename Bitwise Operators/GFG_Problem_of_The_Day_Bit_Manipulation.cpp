#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=19171,y=15726,l=2,r=9;
          int bitX;
        int bitY;
       long long int answer = 0,i = 0;
        
        while(x!=0 || y!=0)
        {
            bitY = y&1;
            bitX = x&1;
            
            if((bitX == bitY) && (l<=r) && (i==l-1))
            {
                answer = (bitX * pow(2,i)) + answer;
                l++;
            }
            else if((l<=r) && (bitY == 1) && (i==l-1))
            {
                answer = (bitY * pow(2,i)) + answer;
                l++;
            }
            else if((l<=r) && (bitY == 0) && (i==l-1))
            {
                 answer = (bitX * pow(2,i)) + answer;
                l++;
            }
            else
            {
                answer = (bitX * pow(2,i)) + answer;
            }
            
            x = x>>1;
            y = y>>1;
            i++;
        }

        cout<<answer<<endl;
    return 0;
}