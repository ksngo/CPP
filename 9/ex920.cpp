#include <list>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    list<int> ilist{1,2,3,4,5,6,7,8,9,10};
    deque<int> ideque_even;
    deque<int> ideque_odd;

    for(auto e: ilist){
        if(e%2 ==0){
            ideque_even.push_back(e);
        } else {
            ideque_odd.push_back(e);
        }
    }

    for(auto i:ideque_even){
        cout<<i<<",";
    }
    cout<<endl;

    for(auto i:ideque_odd){
        cout<<i<<",";
    }
    cout<<endl;
}