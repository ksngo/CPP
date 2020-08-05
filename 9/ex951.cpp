#include "ex951.h"
#include <iostream>

using namespace std;

int main()
{
    Date today;
    today.Print();

    Date iday("11,30,1990");
    iday.Print();

    Date iday2("4/5/1991");
    iday2.Print();

    Date iday3("Jun,12/2001");
    iday3.Print();

    Date iday4("Dec/31/1985");
    iday4.Print();

    auto date = Date("Feb,28,1999");
    date.Print();




}