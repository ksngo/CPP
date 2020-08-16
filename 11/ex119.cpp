#include <map>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<string, list<size_t>> imap;

    string word;
    while(cin>>word && word!= "@q"){
        imap[word].push_back(0);
        imap[word].push_back(11);
    }

    for(auto i : imap){
        cout<<i.first<<" : ";
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}