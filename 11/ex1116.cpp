#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<int, string> imap;
    imap[25] = "Alan";

    map<int, string>::iterator iter = imap.begin();

    (*iter).second = "hello";
    iter->second = "wang";

    cout<<iter->first<<iter->second<<endl;
    
}