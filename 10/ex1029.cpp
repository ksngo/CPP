#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    ifstream in("file.txt");
    vector<string> ivec;

    istream_iterator<string> in_iter(in);
    istream_iterator<string> eof;

    // if(in){
    //     string word;
    //     //while(in>>word){
    //     while(in_iter != eof){
    //         //*back_inserter(ivec)++ = word; // using iterator from back_inserter() from iterator header  ; instead of using ivec.push_back(in)
    //         *back_inserter(ivec)++ = *in_iter++;
    //     }
    // }
    
    //copy(in_iter, eof, ivec.begin()); //this won't work unless I provide vector<string> ivec(6) , provide size to the vector container
    copy(in_iter,eof, back_inserter(ivec));

    ostream_iterator<string> out_iter(cout, " ");

    for(auto i: ivec){
        *out_iter++ = i;
    }
    cout<<endl;

    copy(ivec.begin(), ivec.end(), out_iter); // can use copy(iterator begin, iterator end, destination iterator)
    cout<<endl;
    copy(ivec.begin(), ivec.end(), out_iter++); // with or without ++ doesn't affect

    cout<<endl;

}