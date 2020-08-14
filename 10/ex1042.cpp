#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

void elimDups(list<string> &words){
    
    words.sort();
    words.unique();

}


int main()
{
    list<string> ilist{"the","quick","brown","fox","jumps","over","the","lazy","dog"};

    elimDups(ilist);

    for_each(ilist.begin(), ilist.end(), [](const string word){cout<<word<<" ";});
    

}