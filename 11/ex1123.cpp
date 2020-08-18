#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    multimap<string, string> imultimap;

    
    for(string lastName, childName; cin>>lastName>>childName ; imultimap.emplace(lastName,childName))
        ;
    
    for(const auto &element : imultimap){
        cout<<element.first<<" "<<element.second<<endl;
    }
}