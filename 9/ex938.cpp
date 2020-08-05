#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

    //(1) capacity() and reserve() valid only for vector and string
    cout<<"ivec.size() :"<<ivec.size()<<endl; //ans 10
    cout<<"ivec.capacity() :"<<ivec.capacity()<<endl; // ans 10

    ivec.reserve(50);
    cout<<"ivec.capacity() :"<<ivec.capacity()<<endl; // ans 50
    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;

    ivec.push_back(11);
    cout<<"ivec.size() :"<<ivec.size()<<endl; //ans 11
    cout<<"ivec.capacity() :"<<ivec.capacity()<<endl; //ans 50
    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;

    // (2) shrink_to_fit can use for vector, string and deque
    ivec.shrink_to_fit();
    cout<<"ivec.size() :"<<ivec.size()<<endl; //ans 11
    cout<<"ivec.capacity() :"<<ivec.capacity()<<endl; //ans 11
    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;

    // (3)resize() 

    ivec.reserve(20);
    ivec.resize(15);
    
    cout<<"ivec.size() :"<<ivec.size()<<endl; //ans 15
    cout<<"ivec.capacity() :"<<ivec.capacity()<<endl; //ans 20
    
    for(auto e: ivec){
        cout<<e<<" ";
    }
    cout<<endl;


}