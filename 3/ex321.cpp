#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> v{1,2,3,4,5,6,7,8,9};

    for(auto iter=v.begin();iter!=v.end(); iter++){
        cout<<*iter<<endl;
    }

    return 0;
}