#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout<<"Enter many sentences."<<endl;

    vector <string> sent_vec;
    string single_line;

    while(getline(cin,single_line)){
        sent_vec.push_back(single_line);
    }

    //previously accessing vector by subscript/indexing ; sent_vec[i]
    //accessing vector by iterator; somthing like pointer actually
    for(auto it = sent_vec.cbegin(); //being() or cbegin()
        it != sent_vec.end() && ! it->empty(); //originally (*it).empty() ;stop loop if line is empty string
        //can use cend() too
        it++){
            cout<<*it<<endl;
        }

    return 0;
}