#include <string>
#include <vector>
#include <iostream>
//#include <utility> //pair can work even though without this header

using namespace std;

void store(vector<string> ivec, vector<int> ivec2, vector<pair<string, int>> &ivec_store){

    auto iter = ivec.begin();
    auto iter2 = ivec2.begin();
    
    //ex 11.13
    while(iter != ivec.end() && iter2 != ivec2.end()){
        //ivec_store.push_back(pair<string, int>(*(iter++), *(iter2++))); // initialised a pair , pair<type, type>(value, value)
        //ivec_store.push_back(make_pair(*(iter++), *(iter2++) ));  //using make_pair to return a pair
        //ivec_store.push_back({*(iter++), *(iter2++)}); //using curly brackets 
        ivec_store.emplace_back(*(iter++), *(iter2++));
    }

    

}


int main()
{
    vector<string> ivec{"hello", "world", "good", "day"};
    vector<int> ivec2{1,2,3,4};
    vector<pair<string, int>> ivec_store; //NOTE pair<type, type> p{ value, value}, p is pair type and initialised to {value, value}.

    store(ivec, ivec2, ivec_store);

    for(auto i: ivec_store){
        cout<<i.first<<":"<<i.second<<endl;
    }
}