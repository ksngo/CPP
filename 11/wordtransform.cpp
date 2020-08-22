#include <string>
#include <map>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

map<string, string> buildMap(string filename);

int main()
{   
    map<string, string> imap = buildMap("file");
    // map<string, string> imap{
    //     {"brb", "be right back"},
    //     {"k", "okay"},
    //     {"y", "why"},
    //     {"r", "are"},
    //     {"u", "you"},
    //     {"pic", "picture"},
    //     {"thk", "thanks"},
    //     {"l8r","later"}
    // };

    string input;

    getline(cin, input);

    istringstream stream(input);

    string word;

    while(stream>>word){
        if( imap.find(word) != imap.end()){
            auto iter = imap.find(word);
            cout<< iter->second <<" ";
        } else {
            cout<<word<<endl;
        }
        
    }




}

map<string, string> buildMap(string filename){

    map<string, string> imap2;

    ifstream file_in(filename);

    string key, value;

    while( file_in>>key && getline(file_in, value)){
        imap2[key] =  value.substr(1); //substr function of string
    }

    for(auto i: imap2){
        cout<<i.first<<":"<<i.second<<endl;
    }

    return imap2;
}
