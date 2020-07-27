#include <iostream>


// passing arguments by reference "void swap(int &ref1)"

using namespace std;

void swap(int &ref1, int &ref2){

    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;

}

//passing arguments by value "void swap(int num1)"
// passing arguments by value, the orginal value are not changed.
void swap_bv(int num3, int num4){
    int temp;
    temp = num3;
    num3 = num4;
    num4 = temp;

    cout<<"inside swap_bv function :"
    <<"num3 is "<<num3<<" & "<<"num4 is "<<num4<<endl;
}

int main()
{   
    int num1 = 7, num2 =100;

    swap(num1 , num2);

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;


    int num3 = 7, num4 =100;

     cout<<"In main function before swap_bv :"
    <<"num3 is "<<num3<<" & "<<"num4 is "<<num4<<endl;

    swap_bv(num3, num4);

    cout<<"back to main function after swap_bv :"
    <<"num3 is "<<num3<<" & "<<"num4 is "<<num4<<endl;


    return 0;
}