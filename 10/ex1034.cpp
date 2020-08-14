#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{   
    //ex10.34
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

    sort(ivec.rbegin(), ivec.rend());

    for(auto i: ivec){
        cout<<i<<" "; //result:  10 9 8 7 6 5 4 3 2 1
    }
    cout<<endl;

    for(auto iter = ivec.rbegin(); iter != ivec.rend();++iter){
        cout<<*iter<<" "; //result: 1 2 3 4 5 6 7 8 9 10
    }
    cout<<endl;

    //ex10.35
    vector<int> ivec2{11,22,33,44,55,66,77,88,99};

    for(auto iter = ivec2.end() -1; iter != ivec2.begin(); --iter){
        cout<<*iter<<" "; // result: 99 88 77 66 55 44 33 22
    }
    cout<<endl;

    //ex10.36
    list<int> ilist{10,100,0,0,0,7,8,9,0,108};

    auto iter = find(ilist.rbegin(),ilist.rend(),0); //returns an iterator which is of reverse type

    cout<<*iter<<"found in front of "<<*iter.base()<<endl; //base() turns iterator to forward type and points to the next element
    // result: 0found in front of 108
    //ex10.37

    list<int> new_list(10);
    ivec = {1,2,3,4,5,6,7,8,9};

    copy(ivec.begin()+2, ivec.begin()+7, new_list.rbegin());

    for(auto i: new_list){
        cout<<i<<" "; // result: 0 0 0 0 0 7 6 5 4 3
    }
    cout<<endl;

    list<int> new_list2(10);
    reverse_copy(ivec.begin()+2, ivec.begin()+7, new_list2.begin());

    for(auto i: new_list2){
        cout<<i<<" "; // result: 7 6 5 4 3 0 0 0 0 0
    }


}