#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;
    cout<<"Insert a line of text."<<endl;

    // while(getline(cin, input)){
    //     cout<<"You have inserted :"<<input<<endl;
    // }

    while(cin>>input){
        cout<<"You have inserted :"<<input<<endl;
    }

    return 0;
    



}