#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_string("Hello world, good morning!");

    for(auto it = my_string.begin(); it != my_string.end() && !isspace(*it); it++){
        *it = toupper(*it); 
        //it likens to the first address of my_string when it=my_string.begin()
        // *it is the value in the address
        //it++ moves the iterator to the next address
    }

    cout<<my_string<<endl;


    //if it points to the address of an object
    //*it is the object 
    //(*it).empty() is same as it->empty()

    return 0;
}