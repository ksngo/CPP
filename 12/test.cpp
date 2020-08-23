#include <memory>
#include <iostream>

using namespace std;

int main()
{
    shared_ptr<int> sp; 
    *sp = 10;

    cout<<*sp<<endl;

    shared_ptr<int> sp2 = make_shared<int>(99);
    //make_shared allocates and initialises an object in dynamic memory
    //and returns a shared_ptr that points to the object
    cout<<*sp2<<endl;




}