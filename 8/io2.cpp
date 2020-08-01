#include <iostream>

using namespace std;

int main()
{   

    //cin is an object of istream class
    // cin.good() true if stream cin is in valid state
    cout<<cin.good()<<endl;  //returns 1

    int int_input;

    cin>>int_input; 

    cout<<"cin a character instead of integer."<<endl;
    cout<<cin.good()<<" cin.good()"<<endl;  //returns 0 or false
    cout<<cin.bad()<<" cin.bad()"<< endl; // returns 0 or false
    cout<<cin.fail()<<" cin.fail()"<<endl; // returns 1 or true
    cout<<cin.eof()<<" cin.eof() "<<endl; // returns 1 if 'ctrl Z' or EOF is inserted.
    cout<<cin.rdstate()<<" cin.rdstate() "<<endl; //returns 4 if inserted a character, returns 6 if inserted EOF

    auto old_state = cin.rdstate();
    cout<<old_state<<" old_state"<<endl; //returns 4

    cin.clear(); //resets the condition values in the stream cin to valid state

    cout<<"after cin.clear()"<<endl; 
    cout<<cin.good()<<" cin.good()"<<endl; //returns 1 or true 
    cout<<cin.bad()<<" cin.bad()"<< endl; // returns 0 or false
    cout<<cin.fail()<<" cin.fail()"<<endl; //returns 0 or false
    cout<<cin.eof()<<" cin.eof() "<<endl; // returns 0 or false
    cout<<cin.rdstate()<<" cin.rdstate() "<<endl; //returns 0

    cout<<old_state<<" old_state"<<endl; //returns 4
    cin.setstate(old_state); 
    cout<<"after cin.setstate(old_state)"<<endl;
    cout<<cin.rdstate()<<" cin.rdstate() "<<endl; //returns 4

}
