#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string input;

    cout<<"enter a string of words."<<endl;
    getline(cin,input);

    for(auto c : input){
        cout<<"X";
    }

    decltype(input.size()) i;
    for(i=0;i<input.size();i++){
        cout<<"x";
    }

    for(auto &my_char:input){
        my_char ='x';
    }
    cout<<endl<<input<<endl;

    int j=0;
    string my_string="A simple string";
    while(j<my_string.size()){
        my_string[j] = 'x';
        j++;
    }
    cout<<my_string<<endl;

    



    return 0;


}