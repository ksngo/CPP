#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    cout<<argv[0]<<endl; 
    cout<<argv[1]<<endl;
    cout<<argv[2]<<endl;
    cout<<argc<<endl;
    
    string input;

    for(size_t i=0; i != argc; i++){
        input += argv[i];
        input += '\n';
    }
    
    cout<<input<<endl;

    return 0;
}