#include <iostream>
#include <string>
#include <sstream>

using namespace std;


istringstream& my_func(istringstream& iss){
    string input;
    // iss>>input;
    // cout<<input<<endl;
    // iss>>input;
    // cout<<input<<endl;
    // iss>>input;
    // cout<<input<<endl;

    while(iss>>input){
        cout<<input<<endl;
        // cout<<iss.fail()<<" iss.fail() "<<endl;
        // iss.setstate(~iss.failbit); //setstate
        // cout<<iss.fail()<<" iss.fail() "<<endl;
    }

    return iss;
}


int main()
{      
    string input;
    getline(cin, input);
    
    istringstream iss(input);

    my_func(iss);



}