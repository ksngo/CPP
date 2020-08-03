#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{   

    char word1[] = "hello";
    char word2[] = "world";
    char word3[8] = "welcome";

    list<char*> my_list{word1, word2, word3};

    vector<string> my_vec;

    my_vec.assign(my_list.begin() , my_list.end());

    for(auto element: my_vec){
        cout<<element<<endl;
    }

    //size-related members

    cout<<"my_vec.size() "<<my_vec.size()<<endl;
    cout<<"my_vec.max_size() "<<my_vec.max_size()<<endl;
    cout<<"my_vec.empty() "<<my_vec.empty()<<endl;

}