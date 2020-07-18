#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input;
    vector <string> string_vector;

    while(cin>>input && input!="end"){
        string_vector.push_back(input);
    }

    for(auto word : string_vector){
        cout<<word<<endl;
    }

    int i;

    for(i=0; i<string_vector.size() ;i++){
        cout<<string_vector[i]<<endl;
    }
    

    cout<<"provide Numbers now:"<<endl;

    int input_int;
    vector <int> int_vector;

    while(cin>>input_int){
        int_vector.push_back(input_int);
    }

    for(auto number: int_vector){
        cout<<number<<endl;
    }

    for(i=0;i<int_vector.size();i++){
        cout<<int_vector[i]<<endl;
    }




}