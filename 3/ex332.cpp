#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using namespace std;

int main()
{
    int my_array[10];

    for(size_t i=0; i<10;i++){
        my_array[i] = i;
    }

    for(auto value : my_array) cout<<value;

    cout<<endl;

    //copying array to another array
    int my_array2[10];

    for(size_t i=0;i<10;i++){
        my_array2[i] = my_array[i];
    }

    for(auto value : my_array2) cout<<value;
    
    cout<<endl;


    //perform same steps by vector

    cout<<"vector way"<<endl;
    //by vector by using subscript/index
    vector <int> my_vector(10,0);

    for(decltype(my_vector.size()) i=0;i<my_vector.size();i++){
        my_vector[i] = i;
    }

    for(auto number: my_vector) cout<<number;
    cout<<endl;

    //alternatively for vector using push_back
    vector <int> my_vector2;

    for(decltype(my_vector2.size()) i=0;i<my_vector2.size();i++){
        my_vector.push_back(i);
    }

    for(auto number: my_vector) cout<<number;
    cout<<endl;

    //alternatively for vector using iterator

    vector <int> my_vector3(10);

    for(auto iter = my_vector3.begin(); iter!=my_vector3.end();iter++){
        *iter = iter - my_vector3.begin();
    }

    for(auto number: my_vector3) cout<<number;

    cout<<endl;








    return 0;

}