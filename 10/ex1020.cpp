#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<string> ivec{"html","css", "javascript","python", "ruby","php","java"};

    size_t sz = 5;

    cout<<
    count_if(ivec.cbegin(), ivec.cend(), 
    [sz](const string i){ return i.size()> sz;})<<endl;

    
}