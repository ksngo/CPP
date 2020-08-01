#include <iostream>
#include <string>

using namespace std;


istream& my_func(istream& is){
    string input;
    while(is>>input){
        cout<<input<<endl;
        cout<<is.fail()<<" is.fail() "<<endl;
        is.setstate(~is.failbit); //setstate
        cout<<is.fail()<<" is.fail() "<<endl;
    }

    is.clear();
    return is;
}


int main()
{
    istream& is = my_func(cin);

    cout<<is.rdstate()<<endl; //returns 0

    

}