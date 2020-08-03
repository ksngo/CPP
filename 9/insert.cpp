#include <vector>
#include <string>
#include <deque>
#include <list>

#include <iostream>

using namespace std;

int main()
{   

    //(1) insert( pointer , value ) is memmber for vector, string, list, deque containers
    vector<int> ivec{1,2,3,4,5,6,7,8};

    deque<float> ideque(ivec.begin(), ivec.end());
    list<double> ilist(ivec.begin(), ivec.end());

    string istring = "Hello";

    auto pt = ivec.insert(ivec.begin(), 0);

    

    cout<<"output vector"<<endl;
    for(auto e: ivec){
        cout<<e;
    }
    cout<<endl;

    cout<<"insert returns pointer to first element that is inserted:";
    cout<<*pt<<endl;

    ideque.insert(ideque.end(), 8.5);

    cout<<"output deque"<<endl;
    for(auto e: ideque){
        cout<<e;
    }
    cout<<endl;

    ilist.insert(ilist.begin(), 0.0);

    cout<<"output list"<<endl;
    for(auto e: ilist){
        cout<<e;
    }
    cout<<endl;

    istring.insert(istring.end(), '-');
    cout<<istring<<endl;

    // (2) insert( pointer , size , value )

    pt = ivec.insert(ivec.end(), 3 , 99);

  

    cout<<"output vector"<<endl;
    for(auto e: ivec){
        cout<<e;
    }
    cout<<endl;

    cout<<"insert returns pointer to first element that is inserted:";
    cout<<*pt<<endl;

    istring.insert(istring.begin(), 2, '*');
    cout<<istring<<endl;

    //(3) insert( pointer(own container), pointer(different container), pointer(different container)))

    vector<int> other_vec{70,71,72,73,74};

    pt = ivec.insert(ivec.end(), other_vec.end() -3, other_vec.end());

    cout<<"output vector"<<endl;
    for(auto e: ivec){
        cout<<e<<",";
    }
    cout<<endl;
    cout<<"insert returns pointer to first element that is inserted:";
    cout<<*pt<<endl;
}