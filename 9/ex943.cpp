#include <string>
#include <iostream>
#include <vector>

using namespace std;

void my_funct(string &s, string oldVal, string newVal){
    
    string word;
    vector<string> ivec;

    for(auto e: s){
        if(e != ' '){
            word.push_back(e);
        } else {
            ivec.push_back(word);
            word="";
        }
    }
    ivec.push_back(word);

    for(auto e: ivec){
        if(e == oldVal){
            //e.insert(0,newVal);
            //e.erase(newVal.size());
            e.replace(0,e.size(),newVal);
        }
        cout<<e<<" ";
    }
    cout<<endl;

    

    cout<<endl;
}


int main()
{
    string s("tho shall not kill , thru ages, tho has seen thru all!");
    string oldVal("tho");

    my_funct(s,"thru","through");

}