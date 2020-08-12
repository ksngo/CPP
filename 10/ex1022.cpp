#include <string>
#include <vector>
#include <iostream>
#include <algorithm>    // for count_if
#include <functional> // for bind


using namespace std;
using namespace std::placeholders;

bool count6(string s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    vector<string> ivec{"html","css","javascript","java","php","python"};


    cout<<count_if(ivec.begin(), ivec.end(), bind(count6, _1, 6))<<endl;

    


}