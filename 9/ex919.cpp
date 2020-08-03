#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    list<string> ideque;

    string word;
    
    while(cin>>word){
        ideque.push_back(word);
    }

    for(auto e: ideque){
        cout<<e<<" ";
    }

    cout<<endl;

    for(list<string>::iterator iter=ideque.begin(); iter!=ideque.end(); ++iter){
        cout<<*iter<<" ";
    }
    cout<<endl;
}