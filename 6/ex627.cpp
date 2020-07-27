#include <iostream>
#include <initializer_list>

using namespace std;

int my_funct(initializer_list<int> li){ // const initializer_list<int> &li
    int sum = 0;

    for(int element : li){
        sum+=element;
    }

    int product = 1;
    for( auto pt = li.begin(); pt != li.end(); ++pt){
        product *= (*pt);
    }


    //return sum;
    return product;
}

int main()
{
    cout<<my_funct({1,2,3,4,5})<<endl;

    return 0;
}