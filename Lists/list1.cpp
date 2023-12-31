#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for(iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout<<*iter<<" ";
    }
}
int main(){
    list<int> list1,list2; 
    //doubly linkedlist one pointer for front and one for back.
    //empty list of length 0

    list1.push_back(10);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_front(9);
    list1.push_front(11);
    //similarly we can use pop_back();
    cout<<"list1 is:"<<endl;
    display(list1);

    cout<<"\nAfter Sorting"<<endl;
    list1.sort();
    display(list1);

    list1.remove(7);
    cout<<"\nAfter removing 7"<<endl;
    display(list1);

    list2.push_back(12);
    list2.push_back(16);
    list2.push_back(19);
    list2.push_back(15);
    list2.push_back(9);
    cout<<"\nlist2 is:"<<endl;
    display(list2);
     cout<<"\nReversed list2"<<endl;
    list2.reverse();
    display(list2);
    cout<<"\nAfter Merging the list2 with list1"<<endl;
    list1.merge(list2);
    display(list1);

    return 0;
}