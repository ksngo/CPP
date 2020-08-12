#include <iostream>
#include <functional> //using std::bind
#include <algorithm> // using std::find_if
#include <vector>
#include <string>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz){
    return s.size() >= sz;
}

int main()
{
    vector<int> ivec{10,9,8,7,6,5,4,3,2,1,0};

    auto iter = find_if(ivec.begin(), ivec.end(), bind(check_size, "hello", _1));

    cout<<*iter<<endl;

}