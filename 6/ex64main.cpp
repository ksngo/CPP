#include <iostream>
#include "ex64.h" 
//for declaring variables for function, fact() in the header file
//while, defining variables in function source file, ex64.cpp


using namespace std;


int main()
{   
    int input;
    cout<<"Enter a number."<<endl;
    cin>>input;

    cout<<"The factorial of "<<input<<"is "<<fact(input)<<endl;

    return 0;
}

// to complile
// g++ ex64.cpp ex64main.cpp -o ex64