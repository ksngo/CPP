#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    //1st way
    vector<int> ivec;

    fill_n(back_inserter(ivec), 10, 0);

    for(int i=0; i<10; ++i){
        cout<<ivec[i]<<" ";
    }
    cout<<endl;

    //2nd way
    vector<int> ivec2(10);

    fill_n(ivec2.begin(), ivec2.size(),0);

    for(auto i: ivec2){
        cout<<i<<" ";
    }
}