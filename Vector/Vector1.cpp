#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1;
    int size;

    cout<<"enter the size of vector:";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        int element;
        cout<<"enter the value of element:";
        cin>>element;
        vec1.push_back(element);
    } 

    for(int j=0;j<size;j++)
    {
        cout<<vec1[j]<<" ";
    }

    
    cout<<endl;

    for(int j=0;j<size;j++)
    {
        cout<<vec1.at(j)<<" ";
    }

    cout<<endl;
    return 0;
}