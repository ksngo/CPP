#include <iostream>
#include "ex64.h" //good practise to declare the function in source file


using namespace std;


//following is defining variable

int fact(int arg){

    int sum =1;
    while(arg>1){
        sum *= arg;
        --arg;
    }

    return sum;
}


