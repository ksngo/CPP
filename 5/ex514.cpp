#include <iostream>
#include <vector>
#include <string>

using namespace std;

//test with "how now now now brown cow cow"

int main()
{
    string word;
    vector <string> records;
    vector <int> count;

    while(cin>>word){
        if(records.size() == 0){
            records.push_back(word);
            count.push_back(1);
        } else {
            bool skip = false;
            for(int i=0; i<records.size();++i){
                if(word == records[i]){
                    ++count[i];
                    skip = true;
                }
            }

            if(!skip){
                records.push_back(word);
                count.push_back(1);
            }

        }

    }

    auto iter = records.begin();
    auto iterc = count.begin();

    for(iter, iterc;
        iter!=records.end(), iterc!=count.end();
        ++iter, ++iterc){
        
        cout<< *iter <<" "<<*iterc<<" count"<<endl;
        
    }


}