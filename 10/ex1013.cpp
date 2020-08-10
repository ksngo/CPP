#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool isStringLong(const string str){
    return str.size() >=5 ? true : false;
}

int main()
{
    vector<string> container{"html", "css", "phpadmin", "javascript","python","java!"};

    for(auto i : container) cout<<i<<" ";
    cout<<endl;

    partition(container.begin(), container.end(), isStringLong);

    for(auto i : container) cout<<i<<" ";
    cout<<endl;


}