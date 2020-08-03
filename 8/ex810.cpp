#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//test with
// .\ex810 myfile

int main(int argc , char** argv )
{   
    //(1) create object fin of ifstream type and associate with a file name
    ifstream fin(argv[1]); //argv[1] is myfile

    vector<string> record;
    string temp;

    //(2) ifstream type object can use in getline() and store each line in temp 
    //(3) every string temp is stored in vector record
    while(getline(fin, temp)){
        record.push_back(temp);
    }

    for(auto element: record){
        cout<<element<<endl;
    }

    //(4) retrieve every vector's element by for; each element is a sentence
    //(5) provide sentence into istringstream type iss object
    //(6) iss>>word will retrieve each word
    for(auto element: record){
        istringstream iss(element);

        string word;
        while(iss>>word){
            cout<<word<<endl;
        }
    }
    

}