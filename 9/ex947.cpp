#include <string>
#include <iostream>

using namespace std;

int main()
{
    string given("ab2n3d7R4E6");

    string numbers("1234567890");

    string::size_type pos = 0;

    while ((pos = given.find_first_of(numbers, pos)) != string::npos){
        cout<<"Number: "<<given[pos]<<endl;
        ++pos;
    }

    pos =0 ;
    while ((pos = given.find_first_not_of(numbers, pos)) != string::npos){
        cout<<"non-Number: "<<given[pos]<<endl;
        ++pos;
    }


}