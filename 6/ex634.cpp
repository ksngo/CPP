#include <iostream>
#include <vector>

using namespace std;

void my_function( vector<int> v ){
    for(auto element:v){
        cout<<element<<endl;
    }
}

void my_recursive(vector<int>::iterator beg, vector<int>::iterator end){ //vector class scope iterator

    if(beg != end){
        cout<<*beg<<" ";
        my_recursive(beg+1, end); // or std::next(beg)
    }
}

int main()
{
    vector<int> my_v = {1,2,3,4,99};

    my_function(my_v);

    my_recursive(my_v.begin(), my_v.end());

    return 0;

}




