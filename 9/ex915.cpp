#include <vector>
#include <iostream>

using namespace std;

bool my_funct(vector<int> v1, vector<int> v2){
    if(v1 == v2){
        return true;
    }

    return false;
}

int main()
{
    vector<int> v1(10, 99);
    vector<int> v2{1,2,3,4,5,6,7,8,9,10};
    vector<int> v3 = {99,99,99,99,99,99,99,99,99,99};

    if(my_funct(v1,v2)) cout<<"v1 equals v2"<<endl;


    if(my_funct(v1,v3)) cout<<"v1 equals v3"<<endl;

    cout<<boolalpha<<(v1 == v3)<<endl;
}