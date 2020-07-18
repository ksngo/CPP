#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector <string> string_vector;
    string word;

    while(cin>>word){

        string_vector.push_back(word);
    }

    for(auto &item: string_vector){
        for(auto &c: item){
            c = toupper(c);
        }
    }

    int count=0;
    for(auto item: string_vector){
        if(count%8 == 0){
            cout<<endl;
        }

        cout<<item<<" ";
        count++;
    }
}