#include <iostream>
#include <iterator>


using namespace std;

bool compare(int* const b1,int* const e1, int* const b2, int* const e2);

int main()
{

    int my_array1[5] = {1,2,3,4,5};
    int my_array2[5] = {1,2,3,6,5};
    int temp;
    int *pointer;

    bool result;
    result = compare(begin(my_array1),end(my_array1),begin(my_array2),end(my_array2));

    if(result){
        cout<<"both arrays are similar."<<endl;
    } else {
        cout<<"Both arrays are different."<<endl;
    }

    return 0;

}

bool compare(int* const b1,int* const e1, int* const b2, int* const e2)
{
    for(int *i = b1, *j =b2; i!=e1, j!=e2; i++, j++){
        if(*i != *j){
            return false;
        }
    }

    return true;



}