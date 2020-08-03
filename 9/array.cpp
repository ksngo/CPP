//e.g. sequential container type: vector
//sequential container type: array

#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<int, 10> my_array;
    array<int, 10> my_array2 = {1,2,3,4,5,6,7,8,9,10};
    array<int, 10> my_array3 = {99};

    cout<<"my_array "<<my_array[0]<<" "<<my_array[9]<<endl;
    cout<<"my_array2 "<<my_array2[0]<<" "<<my_array2[9]<<endl;
    cout<<"my_array3 "<<my_array3[0]<<" "<<my_array3[9]<<endl;


    //built-in array

    int bi_array[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"bi_array "<<bi_array[0]<<" "<<bi_array[9]<<endl;
    // not allowed
    // int bi_array2[10] = bi_array; //no copy or assignment for built-in arrays

    // sequential container array

    my_array = my_array2;
    cout<<"my_array "<<my_array[0]<<" "<<my_array[9]<<endl;
    

}