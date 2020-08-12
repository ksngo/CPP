#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void elimDups(vector<string>& words ){

    // sort algorithm, sort container by default < operator
    sort(words.begin(), words.end());

    // unique algorithm, removes duplicates from container, return pointer after last element
    auto end_iter = unique(words.begin(), words.end());

    // erase member function of container class, removes the range of elements from container
    words.erase(end_iter, words.end());

}

void biggies(vector<string>& words, size_t sz){

    elimDups(words);

    // stable_sort algorithm, add a predicate as third argument which accepts a function, use lamba directly over function
    // sort container by string.size()
    stable_sort(words.begin(), words.end(), [](const string a, const string b)
    {return a.size()<b.size();});

    //find_if algorithm
    //provide a predicate argument of lambda/function, find_if will return pointer for first value that meet the condition
    auto first_iter = find_if(words.begin(),words.end(), [sz](const string a){return a.size() >=sz ;});

    //for_each algorithm

    for_each(first_iter, words.end(), [](string a){cout<<a<<" ";});

    cout<<endl;

}

int main()
{
    vector<string> ivec{"html", "css", "javascript","python", "java", "c++", "c", "php", "ruby"};

    biggies(ivec, 4);
    
}