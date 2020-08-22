#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    map<int, string> imap{{106, "yellow"}, {109, "teal"}, {56, "red"}, {45,"green"}};

    for(auto i : imap) cout<<i.first<<" "<<i.second<<endl;

    map<int, string>::key_type kt = 99;
    imap[kt] = "sky";

    map<int, string>::mapped_type mt = "orange";

    imap[83] = mt;

    cout<<endl;
    for(auto i : imap) cout<<i.first<<" "<<i.second<<endl;





}