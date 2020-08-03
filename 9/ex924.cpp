#include <vector>
#include <string>
#include <iostream>

#include <deque>
#include <array>

using namespace std;

int main()
{
    vector<string> ivec{"Hi", "I", "am", "robocop","!"};

    cout<<"using at "<<ivec.at(0)<<endl;
    cout<<"using subscript "<<ivec[1]<<endl;
    cout<<"using front "<<ivec.front()<<endl;
    cout<<"using back "<<ivec.back()<<endl;
    cout<<"using begin "<<*(ivec.begin()+3)<<endl;
    cout<<"using end "<<*(ivec.end()-2)<<endl;

    cout<<"deque--------"<<'\n'<<endl;
    deque<string> ideque{"Hi", "I", "am", "robocop","!"};

    cout<<"using at "<<ideque.at(0)<<endl;
    cout<<"using subscript "<<ideque[1]<<endl;
    cout<<"using front "<<ideque.front()<<endl;
    cout<<"using back "<<ideque.back()<<endl;
    cout<<"using begin "<<*(ideque.begin()+3)<<endl;
    cout<<"using end "<<*(ideque.end()-2)<<endl;

    cout<<"array--------"<<'\n'<<endl;
    array<string, 5> iarray{"Hi", "I", "am", "robocop","!"};

    cout<<"using at "<<iarray.at(0)<<endl;
    cout<<"using subscript "<<iarray[1]<<endl;
    cout<<"using front "<<iarray.front()<<endl;
    cout<<"using back "<<iarray.back()<<endl;
    cout<<"using begin "<<*(iarray.begin()+3)<<endl;
    cout<<"using end "<<*(iarray.end()-2)<<endl;

    cout<<"string--------"<<'\n'<<endl;
    string istring("ILOVE");

    cout<<"using at "<<istring.at(0)<<endl;
    cout<<"using subscript "<<istring[1]<<endl;
    cout<<"using front "<<istring.front()<<endl;
    cout<<"using back "<<istring.back()<<endl;
    cout<<"using begin "<<*(istring.begin()+3)<<endl;
    cout<<"using end "<<*(istring.end()-2)<<endl;

}