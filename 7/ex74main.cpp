#include "ex74.h"

int main()
{
    Person Tommy("Tommy", "Sembawang drive");
    print(cout, Tommy)<<endl;
    Person James("James", "Yishun Ring Road");
    print(cout, James)<<endl;
    Person New(cin);
    print(cout, New)<<endl;

}