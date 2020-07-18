#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string input;

    cout<<"Insert a string of words:"<<endl;
    getline(cin, input);

    for(auto &c: input){
        if(ispunct(c)){
            c = ' ';
        } else {
            cout<<c;
        }
    }
    cout<<endl<<input<<endl;

    cout<<"Enter another string of words:"<<endl;
    getline(cin, input);

    int i;
    for(i=0;i<input.size();i++){
        if(ispunct(input[i])){
            input[i] = ' ';
        }
    }
    cout<<input<<endl;



}