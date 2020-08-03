#include <vector>
#include <iostream>
#include <list>

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
    list<int> l1 = {99,99,99,99,99,99,99,99,99,99};

    if(my_funct(v1,v2)) cout<<"v1 equals v2"<<endl;

    //(1) use iterator to make transfer list to vector container
    // use vector constructor to initialise
    vector<int> temp(l1.begin(), l1.end());

    if(my_funct(v1,temp)) cout<<"v1 equals temp"<<endl;

    cout<<boolalpha<<(v1 == temp)<<endl;


    //(2) alternatively use assign() and iterator to make transfer list to vector container
    vector<int> temp2;
    temp2.assign(l1.begin(), l1.end());
    if(my_funct(v1,temp2)) cout<<"v1 equals temp2"<<endl;

    cout<<boolalpha<<(v1 == temp2)<<endl;


}