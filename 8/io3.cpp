#include <iostream>

using namespace std;

int main()
{
    cout<<"hi!"<<endl; //writes and a newline and flush buffer
    cout<<"hi!"<<flush; //writes and flush buffer
    cout<<"hi!"<<ends; //writes and a null and flush buffer
    cout<<endl;

    cout<<unitbuf; //all writes will flushed immediately

    cout<<"hello!"<<endl;
    cout<<"hello!"<<flush;
    cout<<"hello!"<<ends;
    cout<<"hello";
    cout<<"hello";
    cout<<"hello";
    cout<<endl;

    cout<<nounitbuf; //returns to normal buffering

    cout<<"hello!"<<endl;
    cout<<"hello!"<<flush;
    cout<<"hello!"<<ends;
    cout<<"hello";
    cout<<"hello";
    cout<<"hello";

}