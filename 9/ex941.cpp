#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<char> ivec {'H','E','L','L','O'};

    // cant work per table 911.JPG
    // string istring(ivec.begin, 5)

    string istring(ivec.begin(), ivec.end());


    cout<<istring<<endl;



}