#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void my_funct(string filename, vector<string>& vec){

    

    ifstream in(filename);

    if(in){
        string temp;
        while(in>>temp){
            vec.push_back(temp);
        }
    } else {
        cerr<<"Error opening file"<<endl;
    }
}

int main()
{
    vector <string> string_vec;

    my_funct("myfile", string_vec);

    for(auto element : string_vec){
        cout<<element<<endl;
    }



}