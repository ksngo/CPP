#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<string, string> imultimap{
        {"john", "Johnbook1"}, 
        {"john", "JohnBook2"},
        {"paul", "paulbook1"}, 
        {"paul", "paulbook2"}
    };

    for(auto i : imultimap) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
    

    if(imultimap.count("paul") == 0){
        cout<<"not found"<<endl;
    } else if(imultimap.count("paul") > 1) {
        size_t counts =  imultimap.count("paul");
        auto iter = imultimap.find("paul");

        while(counts){
            iter = imultimap.erase(iter);
            --counts;
        }

    } else {
        auto iter = imultimap.find("paul");
        imultimap.erase(iter);
    }

    for(auto i : imultimap) cout<<i.first<<" "<<i.second<<endl;

}