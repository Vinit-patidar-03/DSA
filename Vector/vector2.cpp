#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v);
void input(vector<int> &v1,int size);

int main()
{
    vector<int> vec1;
    int size;

    cout<<"Enter the value of size:";
    cin>>size;

    input(vec1,size);

    vec1.pop_back();//removes a element present at the end

    vector<int>::iterator iter =vec1.begin();//way to define an iterator.
    vec1.insert(iter,5,65);//vec1.insert(iterator,no of copies,data); insert data at the index "iter-1"

    display(vec1);

    return 0;
}

void display(vector<int> &v)
{
    for(int j=0;j<v.size();j++)
    {
        cout<<v.at(j)<<" ";
    }
}

void input(vector<int> &v1,int size)
{
    for(int i=0;i<size;i++)
    {
        int number;
        cout<<"enter the number "<<i+1<<":";
        cin>>number;

        v1.push_back(number);//add an element at the end
    }
}