#include <set>
#include "../8/sales.h"

using namespace std;

//using comparison function for the key type

bool compareisbn(const Sales_data &lhs, const Sales_data &rhs ){
    return lhs.isbn() < rhs.isbn();
}


int main()
{   

    //providing a function(returns bool) to sort the keys in multiset
    //use decltype to specify type of operation.
    //when use decltype to form a function pointer, need add a * to indicate
    //we are using a pointer to the given function type

    multiset<Sales_data, decltype(compareisbn)*> bookstore(compareisbn);


    //alternatively
    // I think a function name is a pointer
    // a function type can be get by
    //(1) decltype(function_name)*
    //or (2) e.g. below

    using myType = bool (*)(const Sales_data &lhs, const Sales_data &rhs );
    multiset<Sales_data, myType> bookstore(compareisbn);

}