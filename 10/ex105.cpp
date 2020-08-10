//explore on equal() from numeric header


#include <numeric>
#include <string>
#include <vector>
#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main()
{
    vector<string> ivec{"hello","world","good","day"};
    vector<string> ivec2(ivec);
    vector<string> ivec3{"the", "end","is","pending","armageddon"};

    std::cout<< equal(ivec.cbegin(), ivec.cend(), ivec2.cbegin())<<endl; //1
    std::cout<< equal(ivec.cbegin(), ivec.cend(), ivec3.cbegin())<<endl; //0

    char ichar[] = "hello world";
    string istring = "hello world";
    

    std::cout<<equal(begin(ichar), end(ichar), istring.begin())<<endl; //1

    const char* ichar2 {"hello world"};

    std::cout<<equal(ichar2, ichar2+10, begin(ichar))<<endl; //1

    const char* ichar3 {"hello"};
    const char* ichar4{"world"};
    const char* ichar5{"good"};
    const char ichar6[]="day";

    std::cout<<ichar3<<endl; //hello
    std::cout<<*ichar3<<endl; //h
    std::cout<<ichar4<<endl; //world
    list<string> ilist{ichar3, ichar4, ichar5, ichar6};

    std::cout<<equal(ilist.begin(), ilist.end(), ivec.begin())<<endl; //1 ==>equal() returns 1 if true and 0 if false ==>equal() is from numeric header

    std::cout<<strcmp(ichar3, "hello")<<endl; //0 ==>strcmp returns 0 if true, and returns 1 if false ==> strcmp() is from cstring header meant for c style strings i.e. char*
    std::cout<<strcmp(ichar3, ichar6)<<endl; //1
    std::cout<<strcmp(ichar3, ichar5)<<endl; //1

}