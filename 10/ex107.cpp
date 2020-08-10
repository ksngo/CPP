#include <vector>
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{   
    //(a)
    /*
    vector<int> vec;
    list<int> lst;
    int i;

    while(cin>>i)   lst.push_back(i);

    vec.resize(lst.size());

    copy(lst.begin(), lst.end(), vec.begin());

    for(auto i: vec)
        cout<<i<<" ";
    */

    //(b)

    vector<int> ivec; 
    ivec.resize(10); //alternatively, declare ivec(10) to provide 10 spaces

    fill_n(ivec.begin(), 10, 0); //ivec needs to explicitly have spaces of 10.
    // alternatively, fill_n(back_inserter(ivec),10,0);


    for(auto i : ivec)
        cout<<i<<" ";



}