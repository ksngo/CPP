#include <iostream>
#include <vector>

//#define NDEBUG 
//turn off debugging when define NDEBUG
// by default we are in debug mode.

using namespace std;

void printVec(vector<int> &vec)
{
    #ifndef NDEBUG //execute if NDEBUG is not defined or meaning in debug mode
        cout<< "vector size: "<<vec.size()<<endl; //execute in debuggin mode
    #endif

    if (!vec.empty()) {
        auto tmp = vec.back(); //last elment of vector
        vec.pop_back(); //remove last elment of vector
        printVec(vec);
        cout << tmp << " ";
    }
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVec(vec);
    cout << endl;
}