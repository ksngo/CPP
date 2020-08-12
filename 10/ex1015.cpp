#include <iostream>

using namespace std;



int main()
{
    
    int i =99;

    auto f = [i](int a){return i+a;};

    cout<<f(1)<<endl;
}