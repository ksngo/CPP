#include <iostream>
#include "sales.h"
#include <fstream>

using namespace std;

int main( int argc, char** argv)
{
    ifstream in(argv[1]); //associate file argv[1] to in object of ifstream type

    Sales_data total;

    if(read(in, total)) //is>> bookNo >> units_sold >> price ; total object will be updated
    // on units_sold, price and revenue
    {
        Sales_data trans;
        while(read(in, trans)){
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(cout, total)<<endl;
                total = trans;
            }
        }
        print(cout,total)<<endl;
    } else {
        cerr<<"No data!"<<endl;
    }

}