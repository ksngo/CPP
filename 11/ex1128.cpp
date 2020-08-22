#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<int>> imap{{"john", {175, 75}}, {"mary", {165, 50}}};

    map<string, vector<int>>::iterator iter;

    iter = imap.find("john");
    cout<<iter->first<<endl;
    cout<<iter->second[0]<<endl;
    cout<<iter->second[1]<<endl;
}