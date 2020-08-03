#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<string> ideque;

    string word;
    
    while(cin>>word){
        ideque.push_back(word);
    }

    for(auto e: ideque){
        cout<<e<<" ";
    }

    cout<<endl;

    for(deque<string>::iterator iter=ideque.begin(); iter!=ideque.end(); ++iter){
        cout<<*iter<<" ";
    }
    cout<<endl;
}