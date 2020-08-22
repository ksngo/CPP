#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main()
{
    multimap<string, string> imultimap{
        {"john", "Johnbook1"}, 
        {"john", "JohnBook2"},
        {"paul", "paulbook1"}, 
        {"paul", "paulbook2"},
        {"paul", "new paulbook2"},
        {"paul", "old paulbook2"},
        {"paul", "v1 paulbook1"}, 
        {"paul", "v2 paulbook1"}, 
        {"terry", "terrybook"}
    };

    map<string, set<string>> imap;

    for(auto i : imultimap){
        imap[i.first].insert(i.second);
    }

    for(auto i: imap){
        cout<<i.first<<":";
        for(auto j : i.second){
            cout<<"<"<<j<<">";
        }
        cout<<endl;
    }



}