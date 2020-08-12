#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional> // using std::bind

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string>& words ){

    // sort algorithm, sort container by default < operator
    sort(words.begin(), words.end());

    // unique algorithm, removes duplicates from container, return pointer after last element
    auto end_iter = unique(words.begin(), words.end());

    // erase member function of container class, removes the range of elements from container
    words.erase(end_iter, words.end());

}

bool checkSize(const string &s, string::size_type sz){
    return s.size() >= sz;
}

void biggies(vector<string>& words, size_t sz){

    elimDups(words);

    // stable_sort algorithm, add a predicate as third argument which accepts a function, use lamba directly over function
    // sort container by string.size()
    stable_sort(words.begin(), words.end(), [](const string a, const string b)
    {return a.size()<b.size();});

    //find_if algorithm
    //provide a predicate argument of lambda/function, find_if will return pointer for first value that meet the condition
    auto last_iter = partition(words.begin(),words.end(), bind(checkSize, _1, sz));

    //for_each algorithm

    for_each(words.begin(), last_iter, [](string a){cout<<a<<" ";}); // javascript python ruby java html

    cout<<endl;

}

int main()
{
    vector<string> ivec{"html", "css", "javascript","python", "java", "c++", "c", "php", "ruby"};

    biggies(ivec, 4);
    
}