#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ivec(10, 7);

    ivec.resize(20);

    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;

    ivec.resize(25, 88);

    
    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;


}