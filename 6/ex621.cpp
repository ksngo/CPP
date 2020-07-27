#include <iostream>

using namespace std;

int my_func(int num1, int* pointer){
    if(num1> *pointer){
        return num1;
    } else if (*pointer > num1){
        return *pointer;
    } else {
        cout<<"Both numbers are equal."<<endl;
        return 0;
    }
}

int main()
{   
    int num1;
    int num2;
    int result;

    cout<<"enter two integers: ";
    cin>>num1>>num2;

    result = my_func(num1, &num2);
    cout<<"Result is "<<result<<endl;

    if(!result){
        cout<<"Try again!"<<endl;
        main();
    }

}
