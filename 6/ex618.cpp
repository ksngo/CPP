#include <iostream>
#include <string>

using namespace std;

void check_string(const string &input){

    for(const char &c : input){
        if(isupper(c)){
            cout<<c<<" is upper case."<<endl;
        }

    }

}

string edit_upper(string &input){

    for(char &c : input){
        if(isupper(c)){
            c =tolower(c);
        }
    }
    return input;
}

int main()
{   

    string user_input = "Hello World, I am hOMe!";

    //cout<<"Enter a string:"<<endl;
    //cin>>user_input;
    //this only fetches 1st word from user entry.

    cout<<"Input is "<<user_input<<endl;

    check_string(user_input);

    edit_upper(user_input);
    cout<<"After edit_upper function: "<<user_input<<endl;


}

