#include <iostream>

using namespace std;

int main()
{
    int v = 10;

    auto f = [&v]() -> bool {
        if(v==0){
            return true;
        } else {
            --v;
            return false;
        }
                         
    };

    while(!f()) cout<<v<<endl;
    

}



