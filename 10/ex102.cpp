//explore on count() and find() from algorithm header

#include <iostream>
#include <algorithm>
#include <list>
#include <string>


using namespace std;

int main()
{
    
    string istring;
    list<string> ilist;

    cout<<"Enter a sequence of strings:(Enter 'e' to exit)"<<endl;
    
    while(cin>>istring && istring!="e"){
        ilist.push_back(istring);
    }

    list<string>::iterator iter = find(ilist.begin(), ilist.end(), "good");
    auto iter2 = count(ilist.begin(), ilist.end(), "good");

    if(iter ==  ilist.end()){
        cout<<" good is not found."<<endl;
    } else {
        cout<<"good is found "<<iter2<<" times."<<endl;
    }

}