#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string input, combine="";
    

    while(getline(cin,input)){
        if(combine.empty()){
            combine = input;
            cout<<combine<<endl;
        } else {
            combine += " " + input;
            cout<<combine<<endl;
        }
        
    }


}