#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <iterator>


using namespace std;

void print(list<string> lst){
    for(auto i : lst) cout<<i<<" ";
}


int main()
{
    vector<string> ivec{"hello","world","hello","world","tomorrow","never","hello"};
    list<string> ilist, ilist2, ilist3;

    sort(ivec.begin(), ivec.end()); // need sort first for unqiue_copy to be effective
    for_each(ivec.begin(), ivec.end(), [](string &s){cout<<s<<" ";}); // result : hello hello hello never tomorrow world world
    cout<<endl;
    

    // back_inserter() from iterator header
    unique_copy(ivec.cbegin(), ivec.cend(), back_inserter(ilist) );
    for_each(ilist.begin(), ilist.end(), [](string &s){cout<<s<<" ";}); //lazy to create a function to print out the list, hence using algorithm for_each and use lambda
    cout<<endl;
    //result : hello never tomorrow world

    // front_inserter() from iterator header
    unique_copy(ivec.cbegin(), ivec.cend(), front_inserter(ilist2) );
    for(auto i : ilist2) cout<<i<<" "; //result : world tomorrow never hello
    cout<<endl;
    

    //inserter() from iterator header
    unique_copy(ivec.cbegin(), ivec.cend(), inserter(ilist3, ilist3.begin()) );
    print(ilist3); //result : hello never tomorrow world
    cout<<endl;
    



}