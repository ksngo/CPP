#include <iostream>
using namespace std;

int main()
{
    cout << "hello world!" <<endl;
    //return -1; // to see return result: in UNIX/vs code: >echo $?
    // in windows prompt: >echo %ERRORLEVEL%

    std::cout<<"Enter two numbers:"<<std::endl;
    int v1 = 0, v2 =0;

    std::cin>>v1>>v2;

    std::cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;

    return 0;



}

//to compile in vs code : ctrl shift B, will generate out hello.exe
//in folder. To run it >.\hello

//to compile at terminal of vs code: >g++ -o hello1 hello.cpp
//hello1.exe will be created in folder.

//in normal windows command prompt: >g++ -o hello2 hello.cpp
// to run just type >hello2