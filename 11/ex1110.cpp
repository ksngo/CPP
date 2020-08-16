#include <vector>
#include <list>
#include <map>
#include <iostream>
//#include <utility>

using namespace std;

int main()
{   
    //ex11.09

    map<vector<int>::iterator , int> imap;
    //by default, the keys will be sorted by "<" operator
    //to define a bool function, map<string, int , decltype(function)*> imap(function)
    //then the map's key will be sorted by the function that returns bool

    vector<int> ivec{123, 456, 789};

    imap[ivec.begin()] = 99;
    imap[ivec.begin() +1] = 98;

    for(auto i : imap){
        cout<<*(i.first)<<" "<<i.second<<endl;
    }

    //insert member for map container and using pair
    // map container key is unique and dont store duplicates
    // for multi keys, use multimap instead
    imap.insert(pair<vector<int>::iterator, int>(ivec.begin()+2, 77));


    cout<<endl;
    for(auto i : imap){
        cout<<*(i.first)<<" "<<i.second<<endl;
    }


    //ex11.10

    // map<list<int>::iterator, int> imap2;

    // list<int> ilist{123,456,789};

    // imap2[ilist.begin()] = 99;

    // cout<<imap2[ilist.begin()]<<endl;

    //ERROR COMPILING: list iterator cannot use the default "<" operator in map container for sorting purpose
    // vector stores elements at contiguous memory locations(can access elements by subscript [])
    // list stores elements at non contiguous memory locations(it internally uses a doubly linked list)(cannot access random elements simply, have to run the list from beginning )
}   