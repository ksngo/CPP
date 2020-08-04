#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl{0,1,2,3,4,5,6,7,8,9};

    forward_list<int>::iterator prev = fl.before_begin();
    auto curr = fl.begin();

    while(curr != fl.end()){
        if(*curr %2){
            curr = fl.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    for(auto e: fl){
        cout<<e<<" ";
    }

    cout<<endl;

}