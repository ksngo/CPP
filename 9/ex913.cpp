#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    list<int> my_list(10, 99);

    vector<double> v1 (my_list.begin(), my_list.end());

    for(auto element: my_list){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element: v1){
        cout<<element<<" ";
    }
    cout<<'\n'<<endl;


    vector<int> my_vec(10,77);

    vector<double> v2 (my_vec.begin(), my_vec.end());

    for(auto element: my_vec){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element: v2){
        cout<<element<<" ";
    }
    cout<<endl;


}