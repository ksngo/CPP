#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1(10,42);
    vector <int> v2{42,42,42,42,42,42,42,42,42,42};
    vector <int> v3;

    int i;

    for(i=0;i<10;i++) v3.push_back(42); 

    if(v1==v2) cout<<"v1 and v2 are the same"<<endl;
    if(v1==v3) cout<<"v1 and v3 are the same"<<endl;

    return 0;

}