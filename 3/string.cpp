#include <iostream>
#include <string>
#include <cctype>

using std::cin; using std::cout;; using std::endl;
using std::string;

int main()
{   
    /*
    string input;
    cout<<"Enter a string:";
    cin>>input;
    cout<<"Given string is "<<input<<endl;
    */

   
//    string line; //string class; create object line define type string class
//     cout<<"Enter a sentence:";
//    getline(cin, line);
//    cout<<"Sentence is '"<<line<<"'"<<endl;
//    cout<<"line.empty() returns"<<line.empty()<<endl; //empty() method of string class
//    cout<<"line.size() returns"<<line.size()<<endl;

//    string::size_type length_string = line.size(); //use special string::size_type; size_type is companion type for defining variable for storing string.size()
//    auto length_string2 = line.size(); //asking compiler to provide appropriate type to store string.size()
//    cout<<"line.size() returns"<<length_string<<length_string2<<endl;

    
    // string s1 ="hello";
    // string s2 = "world";
    // string s4 = s1+", ";
    // cout<<s4<<endl;
    // //string s5 = "hello"+", "; /*error*/
    // //cout<<s5<<endl;
    // string s6 = s1 + ", "+"world";
    // cout<<s6<<endl;
    // //string s7 = "hello" + ", "+s2; /*error*/
    // //cout<<s7<<endl;

    string my_string ="Hello world, '?' good game!!!";
    decltype(my_string.size()) count=0; //decltype-->get type based on my_string.size() which is string::size_type

    for(auto c: my_string){
        cout<<c;
        if(ispunct(c)){
            count++;
        }
    }

    cout<<endl<<"There are "<<count<<" punctuations."<<endl;


    for(auto my_char: my_string){
        my_char = toupper(my_char);
        cout<<my_char;
    }

    for(auto my_char: my_string){
        my_char = toupper(my_char);
        cout<<my_char;
    }
    cout<<endl<<my_string<<endl;

    for(auto &my_char: my_string){ //using reference & so that actual string is changed to uppercase
        my_char = toupper(my_char);
    }

    cout<<my_string<<endl;

    //unsigned int i;
    //using decltype is an unsigned type too

    for(decltype(my_string.size()) i=0;i<my_string.size(); i=i+2){
        my_string[i] = tolower(my_string[i]);
    }

    cout<<my_string<<endl;

    return 0;


}