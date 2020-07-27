#include <iostream>
#include <string>

using namespace std;

string my_array[10];

string (&my_func())[10] { //* in place of & does not work.

    
    string input;
    int i=0;

    cout<<"Enter 10 numbers"<<endl;
    while(i!=10){
        cin>>input;
        my_array[i] = input;
        cout<<input<<" "<<my_array[i]<<" "<<my_array<<endl;
        ++i;
    }

    return my_array; //
}

int main()
{
    string record[10];

    auto beg = my_func();

    for( size_t i =0; i!=10; ++i){
        cout<< *beg<<endl;
        ++beg;
    }

    // for( string element : record){
    //     cout<<element<<end;
    // }


}