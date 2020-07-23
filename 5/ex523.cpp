#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{   
    int num1, num2;
    cout<<"enter two integers:";
    cin>>num1>>num2;

    if(num2==0) throw runtime_error("Number 2 cannot be 0."); 
    // shows the message in command prompt , is not shown via cout
    

    cout<<num1/num2<<endl;

    return 0;
}