#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> //provides inserter iterator and stream iterator

using namespace std;

int main()
{
    istream_iterator<int> in(cin), eof;

    vector<int> ivec;

    copy(in, eof, back_inserter(ivec));

    //alternatively
    // while(in != eof){
    //     ivec.push_back(*in++);
    // }

    sort(ivec.begin(), ivec.end());

    ostream_iterator<int> out(cout, ",");

    //ex10.30
    //copy(ivec.begin(), ivec.end(), out);

    //ex10.31
    unique_copy(ivec.begin(), ivec.end(), out );


    

}