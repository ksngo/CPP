#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int my_array[5] = {8,7,6,5,4};

    vector <int> v(begin(my_array), end(my_array));

    for(auto number: v){
        cout<<number;
    }

    cout<<endl;

    int my_array2[5];

    //straight forward way ; copy from vector to array
    for(int i=0;i<5;i++){
        my_array2[i] = v[i];
    }

    for (auto number:my_array2){
        cout<<number;
    }

    cout<<endl;

    //by array iteration begin() and end(); copy from vector to array

    int my_array3[] = {999,88,77,66,55};

    for(auto *i = begin(my_array3); i!=end(my_array3); i++){
        *i = my_array3[i-begin(my_array3)];
    }

    for (auto number:my_array3){
        cout<<number;
    }

    cout<<endl;





    return 0;


}