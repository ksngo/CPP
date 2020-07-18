#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string string1, string2;

    cout<<"Enter two strings"<<endl;
    getline(cin,string1);
    getline(cin,string2);

    if (string1==string2){
        cout<<"Both strings are equal!"<<endl;

    }else{
        if(string1>string2){
            cout<<"string1 is larger than string2."<<endl;
        } else {
            cout<<"string2 is larger than string1."<<endl;
        }
        
    }

    if(string1.size() == string2.size()){
        cout<<"Both strings have the same size."<<endl;
    } else {
        cout<<"Both strings different size."<<endl;
    }
    




}