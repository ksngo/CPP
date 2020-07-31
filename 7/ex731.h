#include <iostream>

using namespace std;


class Y;


class X
{
    Y *pt_y = nullptr;
};

class Y
{
    X *pt_x;
};