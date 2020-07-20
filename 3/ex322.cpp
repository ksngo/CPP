#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout<<"Enter paragraphs of sentences."<<endl;

    vector <string> v;
    string input;
    while(getline(cin,input)){
        v.push_back(input);
    }

    vector <string> v_uc;

    for(auto iter = v.begin(); iter!=v.end() && !(*iter).empty();iter++){
        for(decltype(iter->size()) i=0; i< iter->size();i++){
            (*iter)[i] =toupper((*iter)[i]);
        }
    }

    for(auto iter = v.begin();iter!=v.end(); iter++){
        cout<<*iter<<endl;
    }

    return 0;

}