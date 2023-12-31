#include<iostream>
#include<vector>
using namespace std;

template <class T> //by making template we can use the same function for all types of data types.
void display(vector<T> &v)
{
    cout<<v.size()<<endl;
    for(int j=0;j<v.size();j++)
    {
        cout<<v.at(j)<<" ";
    }
    cout<<endl;
} 

template <class T> 
void input(vector<T> &v1,int size)
{
    for(int i=0;i<size;i++)
    {
        T number;
        cout<<"enter the number "<<i+1<<":";
        cin>>number;
        v1.push_back(number);//add an element at the end
         cout<<number;
    }
}

int main(){

    vector<int> vec1;//zero length vector.
    vector<char> vec2;//4 element char vector.
    vector<char> vec3(vec2);//4 element char vector from vec2.
    vector<int> v(6,3);//6 elements vector of 3's.

    cout<<vec2.size();
    input(vec1,3);
    input(vec2,4);
    display(vec1);
    display(vec2);
    display(vec3);
    display(v);
    cout<<vec2.size();

    return 0;
}