#include <list>
#include <deque>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    list<int> ilist;
    list<int> ilist2;
    deque<int> ideque;
    deque<int> ideque2;
    vector<int> ivec;
    string istring = "single";

    for(size_t i = 0; i!=5; ++i){
        ilist.push_front(i);
        ilist2.push_back(i);
        ideque.push_front(i);
        ideque2.push_back(i);
        //ivec.push_front(i); //vector container doesnt have member push_front()
        istring.push_back('s');
        // istring.push_front('?'); //like vector, string don't have push_front
    }

    //container list  doesnt permit subscript
    //subscript only valid for vector, string, deque and array
    // for(size_t n=0; n!=5; ++n){
    //     cout<< ilist[n] <<" ";
    // }
    // cout<<endl;

    for(auto element: ilist){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element: ilist2){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element: ideque){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element: ideque2){
        cout<<element<<" ";
    }
    cout<<endl;

    cout<<istring<<endl;



    
}