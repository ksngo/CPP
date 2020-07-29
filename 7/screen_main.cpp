#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
    Screen myScreen(5,3);

    const Screen blank(5,3,'h');

    myScreen.set('#').display(cout);
    cout<<endl;
    blank.display(cout);
    cout<<endl;

    Screen myScreen2(5,5,'X');
    myScreen2.move(4,0).set('#').display(cout);
    cout<<endl;
    cout<<myScreen2.contents<<endl;
    cout<<myScreen2.contents[20]<<endl;
    cout<<myScreen2.contents[24]<<endl;

    myScreen2.display(cout);
    cout<<endl;
    

}