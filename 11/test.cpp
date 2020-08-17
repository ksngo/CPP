#include <map>
#include <iostream>
#include <string>
#include <set>

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


}