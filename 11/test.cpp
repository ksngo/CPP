#include <map>
#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{   
    //(1) associative container, map & set
    /*
    map<string, size_t> imap;
    set<string> exclude{"fuck","idiot","shit"};

    string word;

    while(cin>>word){
        for(char &ch : word){
            ch = tolower(ch);
        }

        if(exclude.find(word) == exclude.end()){
            ++imap[word];
        }
        
    }

    for(const auto &i: imap){
        cout<<i.first<<":"<<i.second<<endl;
    }

    cout<<imap["hello"]<<endl;
    */

    //(2) Associative container, types

    /*
    set<string>::key_type v1; //v1 is a string
    v1 = "hello";
    cout<<v1<<endl;

    set<string>::value_type v2; //v2 is a string

    map<string, int>::key_type v3; //v3 is a string
    map<string,int>::mapped_type v4; //v4 is a int
    map<string, int>::value_type v5; //v5 is a pair<const string, int>
    */

   //(3) Associative container , iterators

    /*
   map<int, string> imap{{10,"hello"}, {2, "world"}, {3,"fuzzy"}};


    cout<<(imap.begin())->first<<endl;
    cout<<(*(imap.begin())).first<<endl;
    cout<<(imap.begin())->second<<endl;
    cout<<(*(imap.begin())).second<<endl;

    map<int, string>::iterator map_iter = imap.begin();    
    while( map_iter != imap.end()){
        cout<<map_iter->first<<" "<<map_iter->second<<endl; //iterator yield elments in ascending key order
        ++map_iter;
    }
    */

    //(4) insert elements in associative container

    vector<int> ivec{1,2,3,4,1,2,3,4};
    set<int> iset;

    //c.insert(b,e)
    iset.insert(ivec.begin(), ivec.end()); //associate container set only have unique keys
    for(auto element: iset) cout<<element<<" "; //result: 1 2 3 4
    cout<<endl;

    //c.insert(il)
    iset.insert({1,2,5,6,}); 
    for(auto element: iset) cout<<element<<" "; //result: 1 2 3 4 5 6
    cout<<endl;

    
    map<int, string> imap;

    imap.insert({{1,"hello"},{2,"world"}});
    
    auto ipair = imap.insert(pair<int, string>(3,"nice"));
    
    cout<<(*(ipair.first)).first<<endl; // result: 3
    cout<<(*(ipair.first)).second<<endl; // result: nice
    //ipair.first returns iterator to the inserted element
    //NOTE: if not inserted because the key already exists, ipair will return as usual as a pair with "pair.first equals iterator to the existing key" and "pair.second equals false"
    //*(ipair.first) returns the element
    //(*(pair.first)).second return the value of the element
    //(*(pair.first)).first return the key of the element

    cout<<ipair.second<<endl; // result: 1 or true ; meaning {3,"nice"} are inserted into imap

    imap.emplace(4,"weather");
    
    imap.insert(make_pair(6,"spectacular"));
    
    imap.insert( map<int,string>::value_type(7,"ronaldo")); //constructs a pair type
    for(auto element: imap){
        cout<<element.first<<" "<<element.second<<endl;
    }





}