#include <map>
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{   
    //(1) associative container, map & set
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

}