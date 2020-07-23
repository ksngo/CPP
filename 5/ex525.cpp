#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{   
    int num1, num2;

    do{
        try{
            cout<<"Enter two integers:";
            cin>>num1>>num2;
            if(num2 == 0) throw runtime_error("Number 2 cannot be 0.");

            cout<<static_cast<double>(num1)/num2<<endl;
            break;
        } catch (runtime_error err){
            cout<<"huh!"<<endl;
            cout<<err.what()<<endl;
            cout<<"Try again!"<<endl;
        }
    } while(true);
    
    return 0;
}